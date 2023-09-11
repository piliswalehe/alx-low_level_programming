#include "dog.h"

/**
 * init_dog - initialize a variable of struct dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: No
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
