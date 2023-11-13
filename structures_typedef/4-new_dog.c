#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - calculate length of string
 * @str: string
 * Return: length of string
*/
int str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * str_copy - copy a string
 * @dest: destination string
 * @src: source string
*/
void str_copy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

}

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
	dog_t *dog;
	int name_len = str_len(name), owner_len = str_len(owner);

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	str_copy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	str_copy(dog->owner, owner);

	return (dog);
}
