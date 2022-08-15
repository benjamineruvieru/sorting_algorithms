#include "sort.h"

/**
 * swap_pos - swaps position of values in array
 *
 * @array: array to be changed
 * @first: first index
 * @second: second index
 */
void swap_pos(int **array, size_t first, size_t second)
{
	int holder;

	holder = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = holder;
}

/**
 * bubble_sort - sorting algorithm that sorts in form
 * of a bubble
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size < 2)
		return;

	for (i = 0; i < size; i++) /* go through the array */
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++) /* loop only the unsorted */
		{
			if (array[j] > array[j + 1])
			{
				swap_pos(&array, j, j + 1);
				print_array(array, size);
				flag = 1;
			}
		}

		/* check if no swap occured (meaning array is sorted) */
		if (!flag)
			break;
	}
}
