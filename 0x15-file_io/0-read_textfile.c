#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, written;
	char *buffer;

	if (filename == NULL)

		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)

		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)

		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	close(fd);

	written = write(STDOUT_FILENO, buffer, bytes_read);
	if (written < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (written);

}
