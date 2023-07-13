#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers.
*@min: minimum integer in array.
* @max: maximum integer in array.
*Return: A pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *ptr;
int i, size;

size = (max - min) + 1;

if (min > max)
return (NULL);

ptr = malloc(size *sizeof(*ptr));
if (ptr == NULL)
return (NULL);

for (i = 0; i < size && min <= max; i++, min++)
*(ptr + i) = min;
return (ptr);
}
