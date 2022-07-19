#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: number of arrays to be sorted
 * @size: size of the arrays
 */
void bubble_sort(int *array, size_t size)
{
	size_t x;
	size_t y;
	int temp;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size - (x - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
