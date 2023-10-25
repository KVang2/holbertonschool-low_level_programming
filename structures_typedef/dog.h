#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - type
 * @name: dog name, character type
 * @age: dog age, float type
 * @owner: dog owner, character type
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
