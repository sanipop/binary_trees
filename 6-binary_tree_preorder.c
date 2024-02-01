#include "binary_trees.h"

/**
 * binary_tree_preorder - check using pre-order traversal.
 * @tree: the addr to the node pointer.
 * @func: fnx for node call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
