#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A type describing a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *a, char *name, float age, char *owner);
void print_dog(struct dog *a);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *a);

#endif
