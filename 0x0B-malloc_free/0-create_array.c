#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: character to assign
 * Description: create array of size  and assign char c
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(char) * size);
	if (size == 0 || A == NULL)
		return (NULL);
	i = 0;
	for (; i < size; i++)
		A[i] = c;
	return (A);
}
