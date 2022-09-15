#include <unistd.h>

/**
 * _putchar-Puts char
 * @c:character 
 * Retrun:success1
 * On error:-1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
