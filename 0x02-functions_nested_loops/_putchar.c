<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
=======
<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
=======
#include <unistd.h>

>>>>>>> 42987547bf650d14fce60e7925e98d7a4beb1d90
>>>>>>> 41f1f547085d863b933605da187ca9178ced260e
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

