#include "main.h"
#include <string.h>

/**
* *_strncpy - function that copies a string.
* @dest: destination string
* @src: string to copy from
* @n: number of bytes
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
