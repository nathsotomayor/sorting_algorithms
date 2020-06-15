#include "sort.h"

/**
 * swap - Swaps two elements
 * @xp: Array Index Address 1
 * @yp: Array Index Address 2
 * Return: Void
 */
void swap(int *xp, int *yp)
{
	size_t temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection Sort algorithm.
 * @array: Unsorted array.
 * @size: Size of the array.
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
			}
		}
		swap(&array[temp], &array[i]);
		print_array(array, size);
	}
}
