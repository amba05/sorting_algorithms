#include "sort.h"

/**
 * bubble_sort - function that implements bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return:never
 */

void bubble_sort(int *array, size_t size)
{
	size_t bubble_iter, i, j, swap_int;

	bubble_iter = size - 1;
	while (bubble_iter > 0)
	{
		for (i = 0; i < bubble_iter; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int = array[i + 1];
				array[i + 1] = array[i];
				array[i] = swap_int;
				for (j = 0; j < size; j++)
				{
					if (j < size - 1)
						printf("%d, ", array[j]);
					else
						printf("%d\n", array[j]);
				}
			}
		}
		bubble_iter--;
	}
}
