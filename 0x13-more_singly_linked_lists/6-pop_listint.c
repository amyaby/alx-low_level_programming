#include "lists.h"

/**
 * pop_listint - deletig the head node
 * @head: pointer 
 *
 * Return: the data of the deleted node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (data);
}
