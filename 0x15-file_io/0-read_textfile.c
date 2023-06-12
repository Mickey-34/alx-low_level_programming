#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: number of bytes to be read
 * @filename: name of files to read
 * Return: number of bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int mimi;
ssize_t kelo;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
return (0);
mimi = open(filename, O_RDONLY);
if (mimi == -1)
return (0);
kelo = read(mimi, &buf[0], letters);
kelo = write(STDOUT_FILENO, &buf[0], kelo);
close(mimi);
return (kelo);
}
