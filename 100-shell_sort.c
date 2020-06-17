#include <stdio.h>
#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 *
 * @array: Address to array.
 * @size: Lenght of the array.
 *
 */

void shell_sort(int *array, size_t size)
{
	int n, temp;
	size_t i, h = 1;

	if (size < 2)
		return;

	while (h < size / 3)
		h = 3 * h + 1;

	while (h > 0)
	{
		for (i = h; i < size; i += 1)
		{
			for (n = i; n > 0 && array[n] < array[n - h]; n -= h)
			{
				temp = array[n];
				array[n] = array[n - h];
				array[n - h] = temp;
			}
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
