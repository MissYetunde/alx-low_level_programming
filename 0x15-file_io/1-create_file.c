#include "main.h"

/**
 * create_file - creates a file with the given name
 * writes the given text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_write = 0;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	return (-1);

	if (len > 0)
	{
	n_write = write(fd, text_content, len);
	if (n_write == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}
