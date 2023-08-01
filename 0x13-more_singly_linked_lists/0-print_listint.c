#include <stdio.h>
#include "lists.h"

 /**
 * print_listint - printing the data of a linked list
 * @h: the head pointer
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *p = h;
size_t count = 0;
if (p == NULL)
{
printf("linked list is empty\n");
return (0);
}
while (p != NULL)
{
printf("%d\n", p->n);
p = p->next;
count++;
}
printf("\n");
return (count);
}
