#include "main.h"

/**
 * largest_number-returns the largest of three numbers
 * @a:first number
 * @b:second integer
 * @c:third intege
 * Return:Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	if (b > c && b > a)
		largest = b;
	if (c > a && c > b)
		largest = c;
	return (largest);
}
