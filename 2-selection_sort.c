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
 * selection_sort - uses the selection algo to sort
 * an array
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int min_val, min_index, flag;

    if (size < 2)
        return;

    for (i = 0; i < size; i++)
    {
        min_val = array[i];
        min_index = i;
        flag = 0;

        for (j = i + 1; j < size; j++) /* start from the unsorted part */
        {
            if (min_val > array[j]) /* check for min value */
            {
                min_val = array[j];
                min_index = j;
                flag = 1;
            }
        }

        if (flag)
        {
            swap_pos(&array, i, min_index);
            print_array(array, size);
        }
    }
}