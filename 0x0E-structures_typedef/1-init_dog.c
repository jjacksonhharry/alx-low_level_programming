#include "dog.h"
#include <stddef.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to dtruct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
