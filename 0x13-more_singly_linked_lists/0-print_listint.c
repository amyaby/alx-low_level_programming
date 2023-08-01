#include "lists.h"

/**
 * print_listint - prints all the data of a linked list
 * @h: the head link pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
