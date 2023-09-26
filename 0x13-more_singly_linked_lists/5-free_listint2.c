#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp_store;

if (head == NULL)
return;

while (*head)
{
temp_store = *head;
*head = (*head)->next;
free(temp_store);
}
head = NULL;
}
