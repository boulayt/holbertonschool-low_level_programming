#ifndef __protect__
#define __protect__

/**
 * struct dog - Poppy ID
 *
 * @name: her name
 * @age: her age
 * @owner: her owner
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
