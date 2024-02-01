#include "binary_trees.h"

/**
 * binary_tree_node - Ams Creates a binary tree node.
 * @parent: Mem addr to the parent of the node to create.
 * @value: Insert value at node.
 *
 * Return: Null with error .
 *         Else- Move pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
