#include "main.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
