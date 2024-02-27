#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree or func is NULL, do nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		tree_depth = 1 + binary_tree_depth(tree->parent);

	return (tree_depth);
}
