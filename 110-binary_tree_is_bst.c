#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - validity status of the search algorith.
 * @tree: pointer to the node to chech.
 * @lo: the current min.
 * @hi: the current high.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - validity status of search tree.
 * @tree: entry point to the root node.
 *
 * Return: binary value of the status
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
