#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: to count arguments
 *@argv: an array of a command listed
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
