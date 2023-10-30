#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fileread;
	ssize_t writer;
	ssize_t t;

	fileread = open(filename, O_RDONLY);
	if (fileread == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fileread);
	return (writer);
}
