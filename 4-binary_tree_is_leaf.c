#include "binary_trees.h"

/**
 * binary_tree_is_leaf - To check for tree
 * @node: Node to check
 * Return: 0 if NULL, 1 if leaf and 0 if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL)
		return (0);

	if (node->right == NULL)
		return (0);

	return (1);
}
