#include "main.h"
/**
*append_text_to_file - appends text at the end of a file
*@filename: name of the file to append
*@text_content: texto to be append
* Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int i;
	int wr;

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
	wr = write(fdes, text_content, i);
	if (wr == -1)
		return (-1);
	close(fdes);
	}
	return (1);
}
