#include "binary_trees.h"

/**
 * binary_tree_is_root - is it root of binary tree.
 * @node: addr of the node.
 *
 * Return: Binary value of output
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
