#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);

	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);

	return (l);
}
