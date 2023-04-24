#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, ii, min;
	int tmp = 0;

	if (array == NULL || size < 2)
	{ return; }

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (ii = i + 1; ii < size; ii++)
		{
			if (array[ii] < array[i])
			{ min = ii; }
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
