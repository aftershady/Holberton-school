#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read a file and write it in terminal
 * @filename: pointer on file
 * @letters: numbers of character to read and print
 * Return: number of bytes writed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, readed, writed;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	readed = read(file, buffer, letters);
	if (readed == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	writed = write(STDOUT_FILENO, buffer, readed);
	if (writed == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	if (readed != writed)
		return (0);
	return (writed);
}
