#include "main.h"

/**
 * _islower-lowercase character
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
}
