#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	int name_len = strlen(name), owner_len = strlen(owner);

	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));

	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
