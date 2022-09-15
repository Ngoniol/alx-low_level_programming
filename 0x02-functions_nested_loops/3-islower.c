#include "main.h"

/**
 * _islower-lowercase character
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 0;
	}
	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	return (result);
}
