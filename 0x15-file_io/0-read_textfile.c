#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: The source file
 * @letters: Number of letters to read and print
 *
 * Return: number of letter it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return(0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILNO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
