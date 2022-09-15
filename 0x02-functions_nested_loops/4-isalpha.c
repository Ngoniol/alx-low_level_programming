#include "main.h"

/**
 * _isalpha-All alphabets
 * @c:input
 * Return:1 if alphabet else 0
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
