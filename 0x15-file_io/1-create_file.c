#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1(Success) else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_fd, len;
	int bytes_w;

	if (!filename)
		return (-1);
	file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		bytes_w = write(file_fd, text_content, len);

		if (bytes_w != len)
		{
			close(file_fd);
			return (-1);
		}
	}
	close(file_fd);
	return (1);
}
