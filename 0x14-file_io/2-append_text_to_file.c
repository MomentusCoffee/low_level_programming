#include "headerfile.h"
/**
 * append_text_to_file - append text to file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 if successful, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;

	bytes_write = write(fd, text_content, i);
	if (bytes_write == -1)
		return (-1);
	close(fd);
	return (1);
}
