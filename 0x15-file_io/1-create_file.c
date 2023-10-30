#include "main.h"
/**
 * create_file - crreates a new file
 * @filename: file to be created
 * @text_context:  file context
 * Return: 1 or -1 if not success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lt, nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = " ";

	for (lt = 0; text_content[lt]; lt++)
		;

	nwr = write(fd, text_content,lt);

	if (nwr == -1)
		return (-1);

	close(fd);

	return (1);
}
