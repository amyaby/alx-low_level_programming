#include "main.h"

/**
 * _strncat - a function that concatenates two strings depends on n
 * @dest: the destination
 * @src: the source
 * @n: number of bytes we will concat
 * Return: a pointer to the resulting string dest: the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	ptr++;
	while (n > 0 && *src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}
	*ptr = '\0';

	return (dest);
}
