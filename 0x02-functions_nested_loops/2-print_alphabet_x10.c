#include "main.h"

/**
* print_alphabet_x10 - print all alphapet in
* lowercase 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	char letter;
	int i;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
		for (i = 0 ; i <= 10 ; i++)
		{
		_putchar(letter);
}
	_putchar("\n");
	}
}
