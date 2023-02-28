#include "main.h"

/**
 * _strcpy - Copies the string pointed to by @src, including the
 *           terminating null byte(\0) to the buffer pointed to by @dest.
 * @dest: pointer to the buffer to copy the string to.
 * @src: The string to copy
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (*(src+len) != '\0')
	{
	       *(dest + len) = *(src + len);
	       len++;
	}
        
        *(dest + len) = '\0';
        return (dest);
}

