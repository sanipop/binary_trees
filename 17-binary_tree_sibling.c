#include "binary_trees.h"

/**
 * binary_tree_sibling - Binary tree sibling 
 *                       look up.
 * @node: A sibling pointer.
 *
 * Return: sibling pointer or null.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
