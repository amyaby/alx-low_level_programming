#include "main.h"

/**
 * create_file -it  Creates a file and writes content to it
 * @filename:the  Name of the file to create
 * @text_content:the  Content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdl;
	ssize_t byte_w;

	if (filename == NULL)
		return (-1);

	fdl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdl == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_w = write(fdl, text_content, strlen(text_content));
		if (byte_w == -1)
			return (-1);
	}

	close(fdl);
	return (1);
}
