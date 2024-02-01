#include "binary_trees.h"

/**
 * binary_tree_inorder - check binary tree using in-order traversal.
 * @tree: Addr of the ref node.
 * @func: per node fxn.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
