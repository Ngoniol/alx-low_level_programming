#include "main.h"

/**
 * _strcpy-copies  string pointed by src
 * @dest: a buffer to copu the string to
 * @src: source
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
