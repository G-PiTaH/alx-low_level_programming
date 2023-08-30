/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */
#include "main.h"
/**
 * sqrt2 - Evaluation to n
 * @x: integer
 * @y: integer
 * @z: iteration number
 *
 * Return: -1 error 1 succes.
 */
int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y  > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - finds the square root of an integer
 * @n: integer
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
