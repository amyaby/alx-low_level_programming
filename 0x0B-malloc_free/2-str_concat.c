#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: other two
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (!ptr)
{
		return (NULL);
}
	strcpy(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
