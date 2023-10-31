#include "main.h"

/**
 * read_textfile - Read a text file and print
 * its content in the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 upon failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdl;
	char *buffer;
	ssize_t byte_r, byte_w;

	if (filename == NULL)
		return (0);

	fdl = open(filename, O_RDONLY);
	if (fdl == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	byte_r = read(fdl, buffer, letters);
	byte_w = write(STDOUT_FILENO, buffer, byte_r);

	if (byte_w == -1 || byte_w != byte_r)
		return (0);

	free(buffer);
	close(fdl);
	return (byte_r);
}
