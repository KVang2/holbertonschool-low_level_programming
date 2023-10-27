#include <stdio.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: dogs
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
