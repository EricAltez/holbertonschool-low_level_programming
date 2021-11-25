#include "main.h"
/**
 *read_textfile - reads text file and prints it to the stdo
 *@filename: text to read
 *@letters: number of letters expected to read and print
 *Return: number of leters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	int nread;
	ssize_t count;
	char *buf;

	buf = malloc(sizeof(char) + letters);
	if (!buf)
		return (0);
	fdes = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	if (fdes == -1)
		return (0);
	nread = read(fdes, buf, letters);
	count = write(STDOUT_FILENO, buf, nread);
	if (count == -1)
		return (0);
	close(fdes);
	free(buf);
	return (count);
}
