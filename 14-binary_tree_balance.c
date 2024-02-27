#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balane factor
 * @tree: A pointer to the root node of the tree to measure it
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	unsigned int left_bal = 0;
	unsigned int right_bal = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_bal = 1 + binary_tree_height(tree->left);

        if (tree->right)
		right_bal = 1 + binary_tree_height(tree->right);

	return (left_bal - right_bal);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree or func is NULL, do nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
