#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: string ptr
 * @letters: num of letters to print
 * Return: num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_rd, num_wr;
	int filed;
	char *buffer;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num_rd = read(filed, buffer, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);


	close(filed);
	free(buffer);

	return (num_wr);
}
