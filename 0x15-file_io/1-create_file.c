#include "main.h"

/**
  * create_file - fun that creates a file
  * @filename: file to create
  * @text_content: filename content
  * Return: 1 (success) and -1 (failure)
  */

int create_file(const char *filename, char *text_content)
{
	int leng = 0;
	int op, wr;

	/* checking if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* calculating text_content's length */
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	/* opening & writing into new created file */
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
