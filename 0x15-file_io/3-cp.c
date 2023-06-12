#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close mimi %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @av: argument vector
 * @ac: argument count
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
int from_mimi = 0, to_mimi = 0;
ssize_t k;
char buf[READ_BUF_SIZE];

if (ac != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
from_mimi = open(av[1], O_RDONLY);
if (from_mimi == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
to_mimi = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_mimi == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
while ((k = read(from_mimi, buf, READ_BUF_SIZE)) > 0)
if (write(to_mimi, buf, k) != k)
dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
if (k == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
from_mimi = close(from_mimi);
to_mimi = close(to_mimi);
if (from_mimi)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_mimi), exit(100);
if (to_mimi)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_mimi), exit(100);
return (EXIT_SUCCESS);
}
