#include "main.h"

/**
 * main-Entry point
 * Return:0 when successful
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar(10);
}
