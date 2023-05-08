#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * memCreate - allocate memory
  * @file: arg
  * Return: memory pointer
  */

char *memCreate(char *file)
{
	char *m = malloc(sizeof(char) * 1024);

	if (m == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (m);
}

/**
  * closing - close
  * @d: arg to close
  * Return: void
  */

void closing(int d)
{
	int y = close(d);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
  * main - copy file contents to another file
  * @argc: arg count
  * @argv: args
  * Return: 0 (sucess)
  */

int main(int argc, char *argv[])
{
	char *bf;
	int fm, fn, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bf = memCreate(argv[2]);
	fm = open(argv[1], O_RDONLY);
	rd = read(fm, bf, 1024);
	fn = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(bf);
			exit(98);
		}
		wr = write(fn, bf, rd);
		if (fn == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(bf);
			exit(99);
		}
		rd = read(fm, bf, 1024);
		fn = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(bf);
	closing(fm);
	closing(fn);
	return (0);
}
