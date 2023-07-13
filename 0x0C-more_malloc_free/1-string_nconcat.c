#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to the null-terminated byte string to append to.
 * @s2: pointer to the null-terminated byte string to copy from.
 * @n: number of bytes from s2 to concatenate.
 * Return: Null ifr the function failed
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *dupStr;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;

dupStr = malloc(sizeof(char) * (i + n + 1));
if (dupStr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
dupStr[i] = s1[i];
}

for (j = 0; j < n && s2[j] != '\0'; j++)
{
dupStr[i] = s2[j];
i++;
}
dupStr[i] = '\0';

return (dupStr);
}
