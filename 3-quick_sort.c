#include "sort.h"

/**
 * lomuto_partition - Takes an element as pivot and places smaller
 * elements to left position and greater elements to right.
 *
 * @array: Unsorted array
 * @first: The first index of the array
 * @last: The last index of the array
 * @size: Lenght ofthe array
 *
 * Return: Index to the pivot
 */
int lomuto_partition(int *array, int first, int last, size_t size)
{
	int piv_idx, pivot, index, var_swap;

	piv_idx = first;
	pivot = array[last];

	for (index = first; index <= last - 1; index++)
	{
		if (array[index] <= pivot)
		{
			var_swap = array[piv_idx];
			array[piv_idx] = array[index];
			array[index] = var_swap;
			if (array[index] != array[piv_idx])
				print_array(array, size);
			piv_idx++;
		}
	}
	var_swap = array[last];
	array[last] = array[piv_idx];
	array[piv_idx] = var_swap;

	if (array[index] != array[piv_idx])
		print_array(array, size);

	return (piv_idx);
}

/**
 * quick_recursion - Sorting recursively
 *
 * @array: Unsorted array
 * @first: The first index of the array
 * @last: The last index of the array
 * @size: Lenght of the array
 *
 * Return: Index to the pivot
 */
void quick_recursion(int *array, int first, int last, size_t size)
{
	int piv_idx;

	if (first < last)
	{
		piv_idx = lomuto_partition(array, first, last, size);

		quick_recursion(array, first, piv_idx - 1, size);
		quick_recursion(array, piv_idx + 1, last, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: Unsorted array
 * @size: Lenght ofthe array
 *
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_recursion(array, 0, size - 1, size);
}
