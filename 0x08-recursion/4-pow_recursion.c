/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */
#include "main.h"
/**
 * _pow_recursion - finds power of a number
 * @x: integer
 * @y: power
 *
 * Return: Power results
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));

}
