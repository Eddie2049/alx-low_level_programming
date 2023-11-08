#include <stdlib.h>
#include "dog.h"

/**
 * _len - length of a string
 * @s: param * pointer to string
 *
 * Return: the length of the string
 */

int _len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

/**
 * *_cpy - copies the string pointed to by src
 * @dest: param. pointer to the buffer in which we copy the string
 * @src: param. string to be copied
 *
 * Return: the pointer to dest
 */
char *_cpy(char *dest, char *src)
{
	int len_, i;

	len_ = 0;
	while (src[len_] != '\0')
	{
		++len_;
	}
	for (i = 0; i < len_; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - entry. creates a new dog
 * @name: param 1. name of the dog
 * @age: parm 2. age of the dog
 * @owner: param 3. owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len_1, len_2;

	len_1 = _len(name);
	len_2 = _len(owner);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(char) * (len_1 + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (len_2 + 1));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	_cpy(p->name, name);
	_cpy(p->owner, owner);
	p->age = age;

	return (p);
}
