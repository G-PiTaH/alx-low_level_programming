#include "main.h"

/**
 * _strcpy - copies string pointed by the pointer
 * @dest: destination string
 * @src: source string
 * Return: (i) for  Success
 */
char *_strcpy(char *dest, char *src)
{
        char *i = dest;

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';

        return (i);
}

