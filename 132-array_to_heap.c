#include "binary_trees.h"

/**
 * array_to_heap - conv array to thus algo
 * @array: first elem in array addr
 * @size: the array size
 *
 * Return: pointer to root node
 *         on fail null
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
