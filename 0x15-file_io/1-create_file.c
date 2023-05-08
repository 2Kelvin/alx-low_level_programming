#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
  * create_file - fun that creates a file
  * @filename: file to create
  * @text_content: filename content
  * Return: 1 (success) and -1 (failure)
  */

int create_file(const char *filename, char *text_content)
{
	int leng = 0;
	int opFile, wrFile;

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
	opFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrFile = write(opfile, text_content, leng);

	if (opFile == -1 || wrFile == -1)
		return (-1);

	close(opFile);
	return (1);
}
