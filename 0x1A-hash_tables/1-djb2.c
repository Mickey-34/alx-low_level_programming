#include "hash_tables.h"

/**
 * hash_djb2 - Input a hash using the djb2 algorithm
 * @str: a pointer to a string to hash
 *
 * Mimi's project
 * Return: The dbj2 hash of str
 *
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int Kali = 5381;
	unsigned int f = '\0';

	while ((f = *str++))
		Kali += (Kali << 5) + f;

	return (Kali);
}
