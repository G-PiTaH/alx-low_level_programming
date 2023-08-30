/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI
 *  DATE: 30TH AUGUST 2023
 */

#include "main.h"
/*
 * _puts_recursion: Prints string followed with a new line
 *
 * @s: string character
 *
 * Return: Ther string 
 */
void _puts_recursion(char *s)
{
	if ( *s == '\0')
	{
		_putchar('\n');

		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
