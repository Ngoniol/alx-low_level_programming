#include <stdio.h>

/**
 * main-Entry point
 * Return:0 on success
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113)
			putchar(ch);
	}
	putchar(10);
	return (0);
}
