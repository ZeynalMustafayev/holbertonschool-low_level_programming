#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp, r, w;

	buf = malloc(sizeof(ssize_t) * letters);
	if (buf == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buf);
		return (0);
	}
	if (buf == NULL)
		return (0);
	r = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	close(fp);
	return (w);
}
