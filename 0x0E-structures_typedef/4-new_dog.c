#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds length of string
 * @str: String to be measured
 * Return: Length of string
 */
int _strlen(char *str)
{
	int grano = 0;

	while (*str++)
	grano++;
	return (grano);
}
/**
 * _strcopy - copies a string pointed to by src.
 * @dest: Buffer storing string copy
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int low = 0;

	for (low = 0; src[low]; low++)
	dest[low] = src[low];
	dest[low] = '\0';
	return (dest);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: Owner of dog
 * Return: New struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
	free(doggy);
	return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
	free(doggy->name);
	free(doggy);
	return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}

