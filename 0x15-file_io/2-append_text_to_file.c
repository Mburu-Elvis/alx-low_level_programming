#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Description: function that creates a file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';
	fd = fopen(filename, "a");
	if (fd == NULL)
		return (-1);
	fprintf(fd, "%s", text_content);
	fclose(fd);
	if (chmod(filename, S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH) != 0)
		return (-1);
	return (1);
}
