#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - type
 * @name: dog name, character type
 * @age: dog age, float type
 * @owner: dog owner, character type
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
