#include "lists.h"

/**
 * add_nodeint - adding  a node at the beginning of a linked list.
 * @head: pointer to the first node in the list
 * @n: data
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
p->n = n;
p->next = *head;
*head = p;
return (p);
}
