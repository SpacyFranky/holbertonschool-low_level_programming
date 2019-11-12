#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: file name.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created, file
 * can not be writeen, write "fails", etc...).
 */
int create_file(const char *filename, char *text_content)
{
	int f, w;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
		w = write(STDIN_FILENO, "\0", STDIN_FILENO);
	if (w == -1)
		return (-1);
	return (1);
}
