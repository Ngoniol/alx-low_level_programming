#include<stdio.h>

/**
 * main-Entry
 * Return:0 when success
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a < b && a < c && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 && b != 56 && c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
