/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */
#include "main.h"

/**
 * _print_rev_recursion - prints char in reverse
 * @s: string character
 *
 * Return: Always 0 succes
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s+1);
	_putchar(*s);
}
