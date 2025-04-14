#include "sort.h"

/**
 * sorting_part - sorts part of the array
 * @array: array
 * @first: Lowest element
 * @last: Highest element
 * @size: size of the array
 * Return: index
 */
int sorting_part(int *array, int first, int last, size_t size)
{
	int pivot = array[last];
	int i = first - 1;
	int j;
	int tmp;

	for (j = first; j < last; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (tmp != array[i])
				print_array(array, size);
		}
	}
	tmp = array[i + 1];
	array[i + 1] = array[last];
	array[last] = tmp;
	if (tmp != array[i + 1])
		print_array(array, size);

	return (i + 1);
}

/**
 * sort_recursion - sort array in parts
 * @array: array
 * @first: first element
 * @last: last element
 * @size: size of the array
 */
void sort_recursion(int *array, int first, int last, size_t size)
{
	if (first < last)
	{
		int returnedindex = sorting_part(array, first, last, size);

		sort_recursion(array, first, returnedindex - 1, size);
		sort_recursion(array, returnedindex + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array
 * @array: array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		sort_recursion(array, 0, size - 1, size);
}
