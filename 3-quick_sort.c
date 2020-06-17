#include "sort.h"
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
}
