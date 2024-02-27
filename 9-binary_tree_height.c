#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree or func is NULL, do nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		size_t left_height, right_height;

		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
	return (0);
}
