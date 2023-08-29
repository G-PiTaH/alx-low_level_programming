#include "main.h"

/**
 * _strlen - Length of a string
 * @s: String character
 * Return: Length of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
