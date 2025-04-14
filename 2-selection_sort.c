#include "sort.h"

/**
 * selection_sort - sorts an array
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t h;
	int tmp;
	int swap = 0;

	if (array)
	{
		for (i = 0; i < size ; i++)
		{
			tmp = array[i];
			for (j = i; j < size; j++)
			{
				if (tmp > array[j])
				{
					tmp = array[j];
					h = j;
					swap = 1;
				}
				if (j + 1 == size && swap == 1)
				{
					array[h] = array[i];
					array[i] = tmp;
					print_array(array, size);
					swap = 0;
				}
			}
		}
	}
}
