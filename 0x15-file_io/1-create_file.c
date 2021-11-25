#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of the file created
 *@text_content: content of the file to create
 *Return: 1 if success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	int i;
	int wr;

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fdes)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		wr = write(fdes, text_content, i);
		if (wr == -1)
			return (-1);
	}
	close(fdes);
	return (1);
}
