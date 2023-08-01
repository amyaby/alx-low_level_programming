#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end.
 * @head: pointer 
 * @n: data 
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *t = *head;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	while (t->next != NULL)
		t = t->next;
	t->next = last_node;
	return (last_node);
}
