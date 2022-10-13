#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: number of elements in the array array.
 * @cmp: pointer to the function to be
 * used to compare values.
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
				return (i);
		}
	}
	return (-1);
}
