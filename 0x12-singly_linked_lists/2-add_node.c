#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 *@head: pointer to the head of the list
 *@str: new string to be added
 *
 * Return: returns the address to the new element or
 * NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *King;
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	King = strdup(str);

	new->str = King;
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
