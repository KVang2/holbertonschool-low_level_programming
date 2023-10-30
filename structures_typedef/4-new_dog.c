#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, n, o;
	dog_t *dog = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	dog = malloc(sizeof(dog_t));
	}
	if (dog == NULL)
	{
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
