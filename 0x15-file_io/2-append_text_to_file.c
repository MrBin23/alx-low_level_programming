#include "main.h"
/**
 * append_text_to_file - appends a text to file
 * @filename: filename
 * @text_content: file to append
 * Return: 1 on success or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lt, nwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY, O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (lt = 0; text_content[lt]; lt++)
			;
		nwr = write(fd, text_content, lt);

		if (nwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
