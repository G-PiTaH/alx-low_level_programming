/********** C RECURSION **********/
/* AUTHOR: PETER MOMANYI */
/* DATE: 30TH AUGUST 2023 */
#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: integer to find factorial
 *
 * Return: The factorial
 */
int factorial(int n)
{
	if (n == 2)
	{
		return 2;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
