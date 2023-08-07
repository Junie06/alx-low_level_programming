#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to stdout
 * @filename: text file
 * @letters: size of letters to be read
 * Return: number of bytes else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t bytes;
	ssize_t bytes_w;
	ssize_t fd = open(filename, O_RDONLY);

	if (!filename)
		return (0);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buff, letters);
	bytes_w = write(STDOUT_FILENO, buff, bytes);

	free(buff);
	close(fd);
	return (bytes_w);
}
