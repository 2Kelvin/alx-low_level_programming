#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * append_text_to_file - fun add text to the end of the file
  * @filename: file arg
  * @text_content: to append
  * Return: 1 (success) | -1 (failure)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int op, wr;

	/* checking if file is NULL */
	if (filename == NULL)
		return (-1);

	/* calculating text_content's length */
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	/* opening file & appending content */
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	/* checking if opening & appending worked */
	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
