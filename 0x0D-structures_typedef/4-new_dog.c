#include "dog.h"
/**
 * _strlen - finds length of string
 * @len: pointer
 * Return: length
 */
int _strlen(char *len)
{
	int x;

	for (x = 0; len[x] != '\0'; x++)
		;
	return (x);
}

/**
 * _strcpy - copy src to dest
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int count;

	for (index = 0; src[index] != '\0'; index++)
		;
	for (count = 0; count <= index; count++)
		dest[count] = src[count];
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: pointer
 * @age: float
 * @owner: pointer
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
