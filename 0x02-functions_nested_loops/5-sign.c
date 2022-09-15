#include "main.h"

/**
 * print_sign-Prints sign of a number
 * @n:input
 * Return:1 if greater,0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	int result;
	char ch;

	if (n > 0)
	{
		result = 1;
		ch = '+';
	}
	if (n == 0)
	{
		result = 0;
		ch = '0';
	}
	if (n < 0)
	{
		result = -1;
		ch = '-';
	}
	return (result);
	_putchar(ch);
}
