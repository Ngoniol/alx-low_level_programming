#include "main.h"

/**
 * _abs-abstract for numbers
 * Return:abstract value
 */
int _abs(int n)
{
	int result;

	if (n < 0)
		result = -n;
	else
		result = n;
	return (result);
}
