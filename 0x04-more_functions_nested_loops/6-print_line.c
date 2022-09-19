#include "main.h"

/**
 * print_line-Draws a straight line
 * @n:input
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (count = 0; count <= n; count++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
