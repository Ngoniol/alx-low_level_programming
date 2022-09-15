#include "main.h"

/**
 * print_alphabet_x10-prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int ch, times;

	for (times = 0; times < 10; times++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar(10);
	}
}
