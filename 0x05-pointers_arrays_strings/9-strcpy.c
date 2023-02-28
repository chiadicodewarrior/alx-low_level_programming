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
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

