#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prings struct dog
 * @d: dog
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
	return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
		printf("name %s\n", d->name);
		printf("age %f\n", d->age);
		printf("owner %s\n", d->owner);
}