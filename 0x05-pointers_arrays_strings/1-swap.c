#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: the first integer
 *
 * @b: the second integer
 * temp: temporary storage
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
