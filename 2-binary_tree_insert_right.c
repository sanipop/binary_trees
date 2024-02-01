#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add node rightward.
 * @parent: The ref node.
 * @value: insert a val.
 *
 * Return: NULL for null parent or err.
 *         Else - move to a new node.
 *
 * Description: Overwrite if available .
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
