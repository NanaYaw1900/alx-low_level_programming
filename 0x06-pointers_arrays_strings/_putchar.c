#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write C character to stdout
 * @c: Print that character
 *
 * return: on success 1
 * on error, -1 is returned, and errno is set well.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
