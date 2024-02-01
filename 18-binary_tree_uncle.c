#include "binary_trees.h"

/**
 * binary_tree_uncle - locate node uncle
 * .
 * @node: entry point to find uncle
 * Return: Null for null or no uncle.
 * Else a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
