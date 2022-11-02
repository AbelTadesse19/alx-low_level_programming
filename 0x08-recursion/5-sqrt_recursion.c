#include "main.h"

/**
 * _sqrt - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int _sqrt(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (_sqrt(c, i + 1));
	else
		return (-1);
}
