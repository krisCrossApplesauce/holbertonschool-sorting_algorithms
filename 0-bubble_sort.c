#include "sorth.h"

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
	int i, ii, x = 1, t;

	while (!(x == 0))
	{
		x = 0;

		for (i = 0; i < size; i++)
		{
			t = 0;

			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;

				for (ii = 0; ii <= size; ii++)
				{
					printf("%d", array[ii]);
					if (ii < size)
					{ printf(", "); }
					else
					{ printf("\n"); }
				}

				x++;
			}
		}
	}
}
