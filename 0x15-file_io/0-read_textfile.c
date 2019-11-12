#include <unistd.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: number of letters of the file.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	char buf[];

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	read(f, buf, letters);
	return (5);
}
