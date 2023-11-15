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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
