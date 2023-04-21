#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a paramter
 * @array: array to be iterated over
 * @size: size of the array
 * @action: function pointer to the function to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
