#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A new node to be added in the biggining of the linked list
 * @head: Double pointer pointing to the list_t list
 * @str: Adding new string to the node
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
