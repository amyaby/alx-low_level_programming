#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*_calloc- function that allocates memory for an array.
*@nmemb:number of bytes to be allocated.
*@size:size of memory allocated
*Return:a pointer to the allocated memory.
*/

int i;
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr ;
    if (nmemb == 0 || size == 0)
    return (NULL);
    ptr=malloc(nmemb*sizeof(unsigned int));
    if (!ptr)
    return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);

}
