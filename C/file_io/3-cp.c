#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copy a file and put the content of the first file int it
 * @argc: number of arguments
 * @argv: pointer on table of arguments
 * Description : read a file if she exist, copy his content in a buffer,
 * and paste it in another file
 * Return:  0
 */
int main(int argc, char *argv[])
{
	ssize_t file_to_cp, file_dest, readed, writed, size;
	char *buffer;

	size = 1024;
	if (argc != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}

	file_to_cp = open(argv[1], O_RDONLY);
	if (file_to_cp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	buffer = malloc(size);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't allocate memory\n");
		close(file_to_cp);
		exit(99);
	}

	readed = read(file_to_cp, buffer, size);
	if (readed == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(file_to_cp);
		exit(98);
	}

	file_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(file_to_cp);
		exit(99);
	}

	writed = write(file_dest, buffer, readed);
	if (writed != readed)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(file_to_cp);
		close(file_dest);
		exit(99);
	}

	if (close(file_to_cp) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", file_to_cp);
		free(buffer);
		close(file_dest);
		exit(100);
	}

	if (close(file_dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %ld\n", file_dest);
		free(buffer);
		exit(100);
	}

	free(buffer);
	return (0);
}
