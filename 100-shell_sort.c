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
	int temp;
	size_t i, j, h = 1;

	if (array == NULL || size < 2)
		return;

	while (h < size / 3)
		h = 3 * h + 1;

	while (h > 0)
	{

		for (i = h; i < size; i += 1)
		{
			temp = array[i];
			for (j = i; j >= h && array[j - h] > temp; j -= h)
			{
				array[j] = array[j - h];
			}
			array[j] = temp;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
