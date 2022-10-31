#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
		{
	 		s[i] = c;
			i++
		}

	return (memory);
}