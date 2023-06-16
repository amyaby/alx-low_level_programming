#include <unistd.h>

/**
 * main - entry function
 * Description: print a message to stderr
 * Return: returning 1 this time, cause we're printing on the stderr.
 */

int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
