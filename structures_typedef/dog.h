#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - type
 * @name: dog name, character type
 * @age: dog age, float type
 * @owner: dog owner, character type
*/

/**
 * dog_t - new name type
*/

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
