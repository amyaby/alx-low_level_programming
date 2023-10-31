#include "main.h"

/**
 * append_text_to_file - it appends text to a file.
 * @filename: The file's name.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdl;
	ssize_t text_len, byte_w;

	if (filename == NULL)
		return (-1);

	fdl = open(filename, O_WRONLY | O_APPEND);
	if (fdl == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		byte_w = write(fdl, text_content, text_len);
		close(fdl);

		if (byte_w != text_len)
			return (-1);
	}
	else
	{
		close(fdl);
		return (1);
	}

	return (1);
}
