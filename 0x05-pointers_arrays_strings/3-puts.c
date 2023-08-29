#include "main.h"

/**
 * _puts - Displys string followed by new line
 * @str: string parameter
 */
void _puts(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
