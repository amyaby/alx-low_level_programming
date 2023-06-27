#include "main.h"
#include <stdio.h>
/**
  * print_array - Prints n elements of an array of integers
  * @a: Array of integers
  * @n: Number of elements of the array to print
  *
  * Return: void
  */
void print_array(int *b, int m)
{
	int j;

	for (j = 0; j < m; j++)
	{
		printf("%d", b[j]);

		if (j != (m - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
