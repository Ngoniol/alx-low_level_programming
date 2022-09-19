#include "main.h"

/**
 * print_most_numbers-prints all digits apart from 2 and 4
 */
void print_most_numbers(void)
{
	int count;

	for (count = 48; count <= 57; count++)
	{
		if ((count != 50) && (count != 52))
			_putchar(count);
	}
	_putchar(10);
}
