#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: int pointer, the array of ints
 * @size: size_t, the size of the array (i assume)
 *
 * Return: void, printf
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i;
	int x = 1, t;

	while (!(x == 0))
	{
		x = 0;

		for (i = 0; i < size; i++)
		{
			t = 0;

			if (array[i] > array[i + 1] && i < (size - 1))
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				print_array(array, size);
				x++;
			}
		}
	}
}
