#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * read_textfile - reaads text file & prints to POSIX stdout
  * @filename: file arg
  * @letters: to be read & printed
  * Return: no of letters read & printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f;
	int m, noOfLetters;

	/* checking if the file is NULL */
	if (filename == NULL)
		return (0);

	/* allocating memory space */
	f = malloc(sizeof(char *) * letters);
	if (f == NULL)
		return (0);

	/* opening file */
	m = open(filename, O_RDONLY, 0600);
	if (m == -1)
		return (0);

	/* reading & writing the file */
	noOfLetters = read(m, f, letters);
	write(STDOUT_FILENO, f, noOfLetters);

	free(f);
	close(m);
	return (noOfLetters);
}
