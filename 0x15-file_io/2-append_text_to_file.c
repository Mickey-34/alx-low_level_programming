#include "main.h"

/**
 * _strlen - return lrngth string
 * @s: string top be checked
 *
 * Return: integer length string
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
 * append_text_to_file - append text to file
 * @filename: name of file to be cerated
 * @text_content: text to be written
 *
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int mimi;
ssize_t kelo = 0, zoo = _strlen(text_content);

if (!filename)
return (-1);
mimi = open(filename, O_WRONLY | O_APPEND);
if (mimi == -1)
return (-1);
if (zoo)
kelo = write(mimi, text_content, zoo);
close(mimi);
return (kelo == zoo ? 1 : -1);
}
