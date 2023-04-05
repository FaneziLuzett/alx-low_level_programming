#include "main.h"
/**
 * _strchr - function that returns pointer or null
 * @s: the pointer to character
 * @c: the character
 *
 * Return: pointer or NULL
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
