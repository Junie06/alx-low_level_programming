#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string content to be appended
 * Return: 1(Success) else -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_fd;
	int bytes_w, len;

	if (!filename)
		return (-1);
	file_fd = open(filename, O_WRONLY | O_APPEND);
	if (file_fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		bytes_w = write(file_fd, text_content, len);
		if (bytes_w != len)
		{
			return (-1);
		}
	}
	close(file_fd);
	return (1);
}
