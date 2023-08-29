#include "main.h"

/**
 * puts2 - prints every character of a sting starting each letter on new line
 * @str: string parameter
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
