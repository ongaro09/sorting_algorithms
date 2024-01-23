#include "sort.h"
#include <stdio.h>
/**
 *printArray - Prints an array of integers.
 *@array: The array to be printed.
 *@size: Size of the array.
 */
void printArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");
}

/**
 *shell_sort - Sorts an array of integers in ascending order
 *using the Shell sort algorithm with Knuth sequence.
 *@array: The array to be sorted.
 *@size: Size of the array.
 */
void shell_sort(int *array, size_t size)
{
	int gap, i, j, temp;

	for (gap = 1; gap <= size / 3; gap = gap * 3 + 1)
		;
	while (gap > 0)
	{
		printf("Array with gap %d: ", gap);
		printArray(array, size);

		for (i = gap; i < size; i++)
		{
			temp = array[i];

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}

			array[j] = temp;
		}

		gap = (gap - 1) / 3;
	}

	printf("Sorted Array: ");
	printArray(array, size);
}
