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
	int insert_position, lowest, previous;
	size_t iters, index, i, count;

	insert_position = 0;
	for (iters = 0; iters < size - 1; iters++)
	{
		lowest = array[iters];
		index = iters;
		for (i = iters; i < size - 1; iters++)
		{
			if (lowest > array[i + 1])
			{
				lowest = array[i + 1];
				index = i + 1;
			}
		}
		previous = array[insert_position];
		array[insert_position] = lowest;
		array[index] = previous;
		insert_position++;

		for (count = 0; count < size; count+=)

