// Fractal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include <cstdint>
#include <memory>
#include <math.h>
#include "Zoom.h"
#include "ZoomList.h"

using namespace std;

int main()
{
	int const WIDTH = 800;
	int const HEIGHT = 600;

	Bitmap bitmap(WIDTH, HEIGHT);
	double min = 9999999;
	double max = -9999999;
	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH*HEIGHT]{ 0 });

	ZoomList zoomList(WIDTH, HEIGHT);
	zoomList.add(Zoom(WIDTH / 2, HEIGHT / 2, 1));

	for (int y = 0; y < HEIGHT; y++)
	{
		for(int x=0; x<WIDTH; x++)
		{
			pair<double, double> coords = zoomList.doZoom(x, y);

			int iterations = Mandelbrot::getIterations(coords.first, coords.second);
			fractal[y*WIDTH + x] = iterations;

			if (iterations != Mandelbrot::MAX_ITERATIONS)
			{
				histogram[iterations]++;
			}

			int total = 0;
			
			for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++)
			{
				total += histogram[i];

				for (int y = 0; y < HEIGHT; y++)
				{
					for (int x = 0; x < WIDTH; x++)
					{
						uint8_t red = 0;
						uint8_t green = 0;
						uint8_t blue = 0;

						int iterations = fractal[y*WIDTH + x];

						if (iterations != Mandelbrot::MAX_ITERATIONS)
						{
							double hue = 0.0;

							for (int i = 0; i <= iterations; i++)
							{
								hue += ((double)histogram[i]) / total;
							}
						}

						uint8_t color = uint8_t(256 * (double)iterations / Mandelbrot::MAX_ITERATIONS);

						bitmap.setPixel(x, y, red, green, blue);
					}
				}
			}
		}
	}

	bitmap.write("test.bmp");
	return 0;
}