#include "main.h"

/**
 * more_numbers-Prints ten times the numbers 0 to 14
 */
void more_numbers(void)
{
	int count, times, a, b;

	for (times = 0; times < 10; times++)
	{
		for (count = 48; count <= 57; count++)
		{
			_putchar(count);
		}
		a = 49;
		for (b = 48; b < 53; b++)
		{
			_putchar(a);
			_putchar(b);
		}
	}
	_putchar(10);
}
