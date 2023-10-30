#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: the name of the file value
 * @text_content: The string value
 *
 * Return: filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, n);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
