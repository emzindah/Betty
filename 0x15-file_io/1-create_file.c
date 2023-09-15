#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: string ptr
 * @text_content: content to be copied into the file
 * Return: 1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int num_l = 0;
	int filed, rwrite;

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (filed == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (filename == NULL)
		return (-1);

	while (num_l)
	{
		num_l++;
	}

	rwrite = write(filed, text_content, num_l);

	if (rwrite == -1)
		return (-1);
	close(filed);

	return (1);
}
