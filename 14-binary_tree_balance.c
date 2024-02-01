#include "binary_trees.h"

/**
 * binary_tree_balance - Balancing factor balance .
 * @tree: the entry point of the node.
 *
 * Return: return balance factor Else 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - find hight of the tree.
 * @tree: Entry point of the tree.
 *
 * Return: the height or 0 for null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
