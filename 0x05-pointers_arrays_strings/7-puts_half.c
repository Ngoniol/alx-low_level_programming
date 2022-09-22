#include "main.h"

/**
 * puts_half-prints half of a string
 * @str:Input
 */
void puts_half(char *str)
{
	int count = 0, num;

	while (str[count])
		count++;
	count = count / 2;
	for (num = 0; num <= count; num++)
	{
		_putchar(str[num]);
	}
	_putchar(10);
}
