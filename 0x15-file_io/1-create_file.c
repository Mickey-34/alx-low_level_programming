#include "main.h"

/**
 * _strlen - return length of string
 * @s: string length to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
int koma;
koma = 0;

if (!s)
return (0);
while (*s++)
koma++;
return (koma);
}

/**
 * create_file - a function that creates a file
 * @text_content: text to be written
 * @filename: name of file to create
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
int mimi;
ssize_t kelo = 0, zoo = _strlen(text_content);

if (!filename)
return (-1);
mimi = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (mimi == -1)
return (-1);
if (zoo)
kelo = write(mimi, text_content, zoo);
close(mimi);
return (kelo == zoo ? 1 : -1);
}
