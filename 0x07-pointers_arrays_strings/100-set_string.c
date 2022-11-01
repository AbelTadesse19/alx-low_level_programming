#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: the value to modify
 * @to: the value to assign
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

100-set_string.c

#include "main.h"

/**
 * set_string - set the value of pointer to a char
 * @s: content is to be copied
 * @to: string
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
