#include "headerfile.h"
/**
 * read_textfile - reads text file
 * @filename: const char
 * @letters: size_t
 * Return: number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read;
	ssize_t bytes_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(size_t) * letters + 1);
	if (buf == NULL)
		return (0);
	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_write == -1)
		return (0);
	free(buf);
	return (bytes_read);
}
