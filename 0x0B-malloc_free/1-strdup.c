#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * pointer to the duplicated string
 * Return: NUll if str is NULL or failed to allocate memory,
 */

char *_strdup(char *str)
{
char *strout;
unsigned int x, y;

if (str == NULL)
return (NULL);

for (x = 0; str[x] != '\0'; x++)
;

strout = (char *)malloc(sizeof(char) * (x + 1));

if (strout == NULL)
return (NULL);

for (x = 0; y <= x; y++)
strout[y] = str[y];

return (strout);
}
