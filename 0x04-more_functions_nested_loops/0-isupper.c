#include <stdio.h>
#include "main.h"

/**
 * main-Entry point
 * @c:input
 * Return:0 when successful
 */
int _isupper(int c)
{
	if (c >=65 && c <= 90)
		return (1);
	else
		return (0);
}
