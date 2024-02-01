#include "binary_trees.h"

/**
 * heap_insert - put max at this algo
 * @root: node root with double pointer
 * @value: the val to be inserted 
 *
 * Return: the val of created pointer
 *         NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new, *flip;
	int size, leaves, sub, bit, level, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));
	tree = *root;
	size = binary_tree_size(tree);
	leaves = size;
	for (level = 0, sub = 1; leaves >= sub; sub *= 2, level++)
		leaves -= sub;
	/* subtract all nodes except for bottom-most level */

	for (bit = 1 << (level - 1); bit != 1; bit >>= 1)
		tree = leaves & bit ? tree->right : tree->left;
	/*
	 * move to tree first spot 
	 * the number of tree equiv.
	 * given-
	 * with 12 nodes in100% tree, with 5 leaves on
	 * 4th tier tree. 5 is 101 in binary. 1 corresponds to
	 * right, 0 to left.
	 * node 1 is 101 == RLR, *root->right->left->right
	 */

	new = binary_tree_node(tree, value);
	leaves & 1 ? (tree->right = new) : (tree->left = new);

	flip = new;
	for (; flip->parent && (flip->n > flip->parent->n); flip = flip->parent)
	{
		tmp = flip->n;
		flip->n = flip->parent->n;
		flip->parent->n = tmp;
		new = new->parent;
	}
	/* Flip till parent is exceeded */

	return (new);
}

/**
 * binary_tree_size - size b tree
 * @tree: the tree to size
 *
 * Return: the tree size
 *         0 with null tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
