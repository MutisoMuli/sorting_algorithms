#include "sort.h"

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

/**
 * swap_ints - Swaps 2 ints in an array.
 * @a: The 1st int to swap.
 * @b: The 2nd int to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * max_heapify - Turn a binary tree into a complete binary heap.
 * @array: An array of ints repin a binary tree.
 * @size: The array/tree's size.
 * @base: The index of the base row of the tree.
 * @root: The root node of the bin tree.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != root)
	{
		swap_ints(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}

/**
 * heap_sort - Sorts an array of ints in ascending
 * order using the heap sort algos.
 * @array: An integer's array.
 * @size: The array's size.
 *
 * Description: Implements the sift-down heap sort
 * algorithm. swaps an array and prints it out.
 */
void heap_sort(int *array, size_t size)
{
	int y;

	if (array == NULL || size < 2)
		return;

	for (y = (size / 2) - 1; y >= 0; y--)
		max_heapify(array, size, size, y);

	for (y = size - 1; y > 0; y--)
	{
		swap_ints(array, array + y);
		print_array(array, size);
		max_heapify(array, size, y, 0);
	}
}
