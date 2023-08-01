#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data (n) 
 * @head: pointer 
 *
 * Return:  sum of all the data (n) of a linked list or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
