#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: number of letters of the file.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	read(f, buf, letters);
	close(f);

	f = open(filename, O_WRONLY, 0600);
	if (f == -1)
		return (0);
	write(f, buf, letters);
	close(f);
	return (letters);
}
