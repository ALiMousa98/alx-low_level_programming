#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog  - create new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog = malloc(sizeof(dog_t));

	if (_dog == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->name = malloc(sizeof(_dog->name) * strlen(name));
	if (_dog->name == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	strcpy(_dog->name, name);
	_dog->age = age;
	_dog->owner = malloc(sizeof(_dog->owner) * strlen(owner));
	if (_dog->owner == NULL)
	{
		free(_dog->owner);
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	strcpy(_dog->owner, owner);
	return (_dog);
}

