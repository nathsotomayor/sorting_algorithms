#include "sort.h"
<<<<<<< HEAD
=======

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

>>>>>>> 3463bfe5b571a7beaafe2d18565bd847b97e4b52
/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: Unsorted array
 * @size: Lenght ofthe array
 *
 * Return: Void
 */
<<<<<<< HEAD

void quick_sort(int *array, size_t size)
{
    int *array_left, *array_right;
    int pivot = array[3];

    int top_left = -1;
    int top_right = -1;
    
    size_t i;

    array_left = malloc(size*sizeof(int));
    array_right = malloc(size*sizeof(int));

    for (i = 0; i < size; i++)
    {
        if (array[i] < pivot)
        {
            top_left++;
            array_left[top_left] = array[i];
        }
        else
        {
            top_right++;
            array_right[top_right] = array[i];
        }
    }
    print_array(array_left, size);
    print_array(array_right, size);
=======
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_recursion(array, 0, size - 1, size);
>>>>>>> 3463bfe5b571a7beaafe2d18565bd847b97e4b52
}
