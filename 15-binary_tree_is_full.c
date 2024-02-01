#include "binary_trees.h"

/**
 * is_full_recursive - implement recursive check on the binary tree.
 * @tree: Entry point of the tree.
 *
 * Return: 0 if not full.
 *         1, when operational.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - if level is 100%.
 * @tree: Entry point of the node.
 *
 * Return: Less than full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
