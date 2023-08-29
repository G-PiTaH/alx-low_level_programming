#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character i to stdout
 * @i: character to be printed
 *
 * return: 1 on success -1 on error
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
