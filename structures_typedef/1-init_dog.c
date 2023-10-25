#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable type
 * @d: variable
 * @name: dog name type char
 * @age: dog age type float
 * @owner: dog owner type char
 * Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
