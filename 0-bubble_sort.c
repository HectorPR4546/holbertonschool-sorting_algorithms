#include "sort.h"

/**
 * bubble_sort - sort number using bubble sort
 * @array: to show elements
 * @size: size of the array
 * Return: bubble sort array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
