#include<stdio.h>

/**
 * main-Entry point
 * Return:0 when successful
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
