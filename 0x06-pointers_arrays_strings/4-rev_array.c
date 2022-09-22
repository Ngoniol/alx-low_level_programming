#include "main.h"

/**
 * reverse_array-rev array content
 * @:array with reversed ints
 * @n:ints in an array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i++)
	{
		remp  = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
