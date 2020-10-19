#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: receives variable s location
 * Return: length of string of int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies the string from pointer src to pointer dest
 * @dest: have src contents
 * @src: copy contents to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @d: pointer to dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcpy(doggy->owner, owner);

	return (doggy);
}


