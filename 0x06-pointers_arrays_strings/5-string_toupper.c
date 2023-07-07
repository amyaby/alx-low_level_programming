#include "main.h"

/**
* *string_toupper - function that changes all lowercase
* letters of a string to uppercase.
* @str: string that will be changed
* Return: str
*/

char *string_toupper(char *str)
{
	int j = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
