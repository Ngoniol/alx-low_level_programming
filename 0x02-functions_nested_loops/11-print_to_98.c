#include <stdio.h>
#include "main.h"

/**
 * print_to_98-Print to 98
 * @n:input
 */
void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; num++)
	{
		printf("%d", n);
		if (num != 98)
		{
			printf(", ");
		}
		if (num == 0)
		{
			printf("\n");
		}
	}
}
