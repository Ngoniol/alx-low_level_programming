#include "main.h"

/**
 * puts2-prints every other character
 * @str:input
 */
void puts2(char *str)
{
	int count = 0, num;

	while (str[count])
		count++;
	for (num = 0; num <= count; num = num + 2)
	{
		_putchar(str[count]);
	}
}
