#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: to count arguments
 * @argv:agrument vector
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
printf("%d\n", argc - 1);
return (0);
}
