<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
=======
#include <unistd.h>

>>>>>>> 42987547bf650d14fce60e7925e98d7a4beb1d90
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
