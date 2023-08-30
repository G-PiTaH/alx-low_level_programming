/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */

#include "main.h"

/**
 * _puts_recursion - works like puts function
 * @s: string character
 *
 * Return: 0 for success (Always)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}
	_putchar(*s); //if above condition fails
	_puts_recursion(s + 1); //recurs for the rest of the string
}
