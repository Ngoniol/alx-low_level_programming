#include "main.h"

/**
 * print_rev-Prints string in reverse
 * @s:input
 */
void print_rev(char *s)
{
	int count = 0, num = 0;

	while (s[count++])
		num++;
	for (count = num - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar(10);
}
