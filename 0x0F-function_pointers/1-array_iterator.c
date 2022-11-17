#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints out an array element using pointers function
 * @array: array to itegers
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
