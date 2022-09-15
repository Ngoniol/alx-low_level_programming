#include "main.h"

/**
 * print_alphabet-prints a to z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar(10);
}
