#include "binary_trees.h"

/**
 * bst_search - value search in the tree.
 * @tree: entry pint to the tree.
 * @value: val to insert.
 *
 * Return: the addr of the new val.
 *         Null with failure or not found.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
