#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Number of elements in a linked list to be return
 * @h: Pointer to the list_t list
 *
 * Return: The number of elements in h file
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
