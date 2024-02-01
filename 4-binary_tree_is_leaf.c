#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verify is a node have leaf.
 * @node: Addr to the node.
 *
 * Return: node is a leaf binary val.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
