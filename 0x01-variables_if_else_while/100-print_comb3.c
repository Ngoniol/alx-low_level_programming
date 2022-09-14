#include<stdio.h>

/**
 * main-Entry point
 * Return:0 when success
 */
int main(void)
{
	int m, n;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			if (m < n)
			{
				putchar(m);
				putchar(n);
				if (m == 8 && n == 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
