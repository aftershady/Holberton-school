#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * create_file - create a file empty or with text in it
 * @filename: name of the file
 * @text_content: text to be writed in file
 * Return: 1 if succes -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file, writed;


	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (0);
	}

	if (text_content != NULL)
	{
		writed = write(file, text_content, strlen(text_content));
		if (writed == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);


	return (1);

}
