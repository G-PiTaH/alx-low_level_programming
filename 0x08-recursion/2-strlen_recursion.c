/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */

#include "main.h"

/**
 * _strlen_recursion - length of a string recursion
 * @s: string char
 *
 * Return: Number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
