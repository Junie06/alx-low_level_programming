#include "main.h"

/**
 * exitError - function to help print error message
 * @message:error message
 * @exitCode: code number to use for exit
 * Return: nothing
 */
void exitError(const char *message, int exitCode);

void exitError(const char *message, int exitCode)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exitCode);
}


/**
 * main - implements the file copy command
 * @argc: argument count from the stdin
 * @argv: char array vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	ssize_t from_fd, to_fd;
	char *buff;
	ssize_t bytes, bytes_written;
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
	{
		exitError("Usage: cp file_from file_to", 97);
	}
	from_fd = open(file_from, O_RDONLY);
	if (from_fd == -1)
	{
		exitError("Error: Can't read from file", 98);
	}
	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close(from_fd);
		exitError("Error: Can't write to file", 99);
	}

	while ((bytes = read(from_fd, buff, sizeof(buff))) > 0)
	{
		bytes_written = write(to_fd, buff, bytes);
		free(buff);
		if (bytes_written != bytes || bytes_written == -1)
		{
			close(from_fd);
			close(to_fd);
			exitError("Error: Can't write to file", 99);
		}
		if (close(from_fd) == -1 || close(to_fd) == -1)
		{
			exitError("Error: Can't close file descriptor", 100);
		}
	}
	return (0);
}
