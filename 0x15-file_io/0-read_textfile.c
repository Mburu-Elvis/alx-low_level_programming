#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that read and prints the content of a file
 * @filename: the name of the file to read and print letters
 * @letters: the number of letters to be read and printed
 *
 * Return: actual numbers printed, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *buf;
	ssize_t act_read, act_print;

	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		fclose(fd);
		return (0);
	}
	act_read = fread(buf, sizeof(char), letters, fd);
	if (act_read <= 0)
	{
		fclose(fd);
		free(buf);
		return (0);
	}
	act_print = fwrite(buf, sizeof(char), act_read, stdout);
	if (act_read != act_print)
	{
		fclose(fd);
		free(buf);
		return (0);
	}
	fclose(fd);
	free(buf);
	return (act_read);
}
