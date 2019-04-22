#pragma once

class Mandelbrot
{
public:
	Mandelbrot();
	virtual ~Mandelbrot();
	static const int MAX_ITERATIONS = 100;
	static int getIterations(double x, double y);
};