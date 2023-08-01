#include "lists.h"
#include <stdio.h>

/**
 * free_listint - freeing a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *t;
if (head == NULL)
printf("linked list deleted succesfully");
	while (t != NULL)
	{
		t = t->next;
		free(t);
		head = t;
	}
}

