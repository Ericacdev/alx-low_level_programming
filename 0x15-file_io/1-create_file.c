#include "main.h"

/**
 *create_file - Creates a file.
 * @filename: name of the file to be created.
 * @text_content: string value
 *
 *Description:creates a file using permissions: rw-------
 *
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, n);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
