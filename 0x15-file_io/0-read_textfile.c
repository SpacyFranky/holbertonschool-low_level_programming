#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: filename.
 * @letters: number of letters of the file.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	r = read(f, buf, letters);
	if (r == -1)
		return (0);

	*(buf + r) = '\0';

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
		return (0);
	close(f);
	return (w);
}
