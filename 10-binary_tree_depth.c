#include "binary_trees.h"

/**
 * binary_tree_depth - cal tree dept.
 * @tree: Entry point of the node.
 *
 * Return: 0 or return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
