#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - freeing a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
    listint_t *t;

    while (head != NULL)
    {
        t = head;
        head = head->next;
        free(t);
    }
}
