#include "main.h"

/**
 * puts_half-prints half of a string
 * @str:Input
 */
void puts_half(char *str)
{
	int count = 0, num, half;

	while (str[count])
		count++;
	half = count / 2;
	for (num = count - 1; num >= half; num--)
	{
		_putchar(str[num]);
	}
	_putchar(10);
}
