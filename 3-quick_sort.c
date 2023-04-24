#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{ return; }

	quick_sorter(array, 0, size - 1, size);
}


/**
 * partition - splits up the array
 *
 * @array: the array to split
 * @lo: the lowest index
 * @hi: the highest index
 * @size: size of the array
 *
 * Return: index of the partition
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = lo - 1, ii, tmp = 0;

	for (ii = low; ii < hi; ii++)
	{
		if (array[j] < pivot)
		{
			i++;

			if (array[i] != array[j])
			{
				tmp = array[i];
				array[i] = array[ii];
				array[ii] = tmp;
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[hi])
	{
		tmp = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}


/**
 * quick_sorter - part of quick_sort, but recurses
 *
 * @array: the array to sort
 * @lo: lowest index
 * @hi: highest index
 * @size: the size of the array
 *
 * Return: void
 */
void quick_sorter(int *array, int lo, int hi, size_t size)
{
	int pi;

	if (lo < hi)
	{
		pi = partition(array, lo, hi, size);
		quick_sorter(array, lo, pi - 1, size);
		quick_sorter(array, pi + 1, hi, size);
	}
}
