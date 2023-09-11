#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
	{
	int nlen, olen, i;
	dog_t *doggy;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
