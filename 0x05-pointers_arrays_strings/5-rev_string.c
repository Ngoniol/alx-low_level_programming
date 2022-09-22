#include "main.h"

/**
 * rev_string-Reverses string
 * @s:input string
 */
void rev_string(char *s)
{
	int count = 0, num = 0;

	while (s[count++])
	{
		num++;
	}
	for (count = num - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar(10);
}
