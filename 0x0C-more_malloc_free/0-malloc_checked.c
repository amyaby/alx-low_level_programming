#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes to be allocated.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)

{
	void*p=(void*)malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
