#include "sort.h"

/**
 *lomuto_partition - Partition array using the Lomuto scheme
 *@array: The array to be sorted
 *@size: Number of elements in @array
 *@low: Lower index for partition
 *@high: Higher index for partition
 *Return: The partition index
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}

			i++;
		}
	}

	if (array[high] < array[i])
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i);
}

/**
 *quicksort - Implements Quick Sort algorithm using Lomuto partition scheme
 *@array: The array to be sorted
 *@size: Number of elements in @array
 *@low: Lower index for partition
 *@high: Higher index for partition
 */
void quicksort(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, size, low, high);

		quicksort(array, size, low, pi - 1);
		quicksort(array, size, pi + 1, high);
	}
}

/**
 *quick_sort - Sorts an array of integers
 *using the Quick sort algorithm
 *@array: The array to be sorted
 *@size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
		quicksort(array, size, 0, size - 1);
}
