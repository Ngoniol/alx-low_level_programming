#include "main.h"

/**
 * _strncat-concatenates two strings
 * @dest:string to be appended
 * @src:stringto be appended
 * @n:number of bytes from source to be appended
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
