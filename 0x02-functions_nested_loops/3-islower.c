#include "main.h"

/**
 * _islower-lowercase character
 * @c:input
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
