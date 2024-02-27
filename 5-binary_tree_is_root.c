#include "binary_trees.h"

/**
 * binary_tree_is_root - To check for tree root
 * @node: Node to check
 * Return: 0 if NULL, 1 if leaf and 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
