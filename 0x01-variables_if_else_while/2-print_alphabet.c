#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet letter;

	for (alphabet letter = 'a'; alphabet letter <= 'z'; alphabet letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
