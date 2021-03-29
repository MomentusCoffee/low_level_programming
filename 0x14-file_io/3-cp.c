#include "headerfile.h"
/**
 * error_98 - error 98
 * @fd: char
 */
void error_98(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
	exit(98);
}
/**
 * error_99 - error 99
 * @fd: char
 */
void error_99(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
	exit(99);
}
/**
 * error_100 - error 100
 * @fd: int
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - entry point
 * @argc: int
 * @argv: double pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file1, file2, read_file, write_file, close_file;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		error_98(argv[1]);

	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		error_99(argv[2]);

	while ((read_file = read(file1, buf, 1024)) != 0)
	{
		if (read_file == -1)
			error_98(argv[1]);
		write_file = write(file2, buf, read_file);
		if (write_file == -1)
			error_99(argv[2]);
	}

	close_file = close(file1);
	if (close_file == -1)
		error_100(file1);

	close_file = close(file2);
	if (close_file == -1)
		error_100(file2);
	return (0);
}
