#include "dog.h"
#include <stdlib.h>

/**
 * str_len - calculate length of string
 * @str: string
 * Return: (length of string)
*/
int str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i + 1);
}

/**
 * str_copy - copy a string
 * @dest: destination string
 * @src: source string
 * Return: (void)
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
	dog_t *dog = malloc(sizeof(dog_t));
	int name_len = str_len(name), owner_len = str_len(owner);

	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	str_copy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(sizeof(char) * (owner_len));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	str_copy(dog->owner, owner);

	return (dog);
}
