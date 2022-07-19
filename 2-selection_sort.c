#include "sort.h"

/**
 * selection_sort - function that implements selection
 * sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Never
 */

void selection_sort(int *array, size_t size)
{
	int insert_position, lowest, previous, swap;
	size_t iters, index, i, count;

	insert_position = 0;
	for (iters = 0; iters < size - 1; iters++, insert_position++)
	{
		swap = 0;
		lowest = array[iters];
		index = iters;
		for (i = iters; i < size - 1; i++)
		{
			if (lowest > array[i + 1])
			{
				lowest = array[i + 1];
				index = i + 1;
			}
		}
		if (array[iters] != lowest)
		{
			previous = array[insert_position];
			array[insert_position] = lowest;
			array[index] = previous;
			swap = 1;
		}
		if (swap)
		{
			for (count = 0; count < size; count++)
			{
				if (count < size - 1)
					printf("%d, ", array[count]);
				else
					printf("%d\n", array[count]);
			}
		}
	}
}
