#include <stdio.h>

/**
* main - this is a function that prints all arguments it receives
* @argc: number of arguments
* @argv: an array of a command listed
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
