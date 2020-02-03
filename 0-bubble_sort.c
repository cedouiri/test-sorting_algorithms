#include "sort.h"

/**
* bubble_sort - a function that sorts an array of integers in
*ascending order using the Bubble sort algorithm
* @array: array of integers
* @size: size of array
**/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;

	for (i = 1; i <= size; i += 1)
		for (j = 0; j < size - i; j += 1)
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
}

/**
* swap - swaps the values of two integers in an array
* @array: array of integers
* @a: Integer 1
* @b: Integer 2
**/

void swap(int *arr, int a, int b)
{
	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
