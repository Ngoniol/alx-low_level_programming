#include "main.h"

/**
 * print_triangle-prints triangle
 * @size:size of triangle
 * Return: triangle
 */
void print_triangle(int size)
{
	int s, r, t;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (r = 0; r <= (size - 1); r++)
		{
			for (s = 0; s < (size - 1) - r; s++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= r; t++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
