#include "main.h"

/**
 *main - entry point
 *@argc: number of argumets
 *@argv: arguments
 *Return: 0 on success else non zero value on error
 */

int main(int argc, char *argv[])
{
	int fdl_r, fdl_w, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdl_r = open(argv[1], O_RDONLY);
	if (fdl_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdl_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fdl_r, buf, BUFSIZ)) > 0)
	{
		if (fdl_w < 0 || write(fdl_w, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdl_r);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(fdl_r);
	c = close(fdl_w);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdl_r);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdl_w);
		exit(100);
	}
	return (0);
}
