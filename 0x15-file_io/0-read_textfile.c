#include "main.h"
/**
 * read_textfile - reads and prints a text file
 * @filename: name of file
 * @letters: letters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t new_wr, new_rd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	new_rd = read(fd, buffer, letters);
	new_wr = write(STDOUT_FILENO, buffer, new_rd);

	close(fd);
	free(buffer);

	return (new_wr);
}
