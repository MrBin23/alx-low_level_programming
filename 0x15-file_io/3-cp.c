#include "main.h"
/**
 * _errorfile - checks if file can open
 * @file_to: the file to
 * @file_from: the file from
 * @argv: argument
 */
void _errorfile(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry
 * @argv: agrument vec
 * @argc: arg number
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int err_close, file_to, file_from;
	ssize_t nchar;
	ssize_t nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_errorfile(file_from, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buffer, 1024);
		if (nchar == -1)
			_errorfile(-1, 0, argv);
		nwr = write(file_to, buffer, nchar);
		if (nwr == -1)
			_errorfile(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
