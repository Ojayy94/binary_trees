#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - A function that measures the balane factor
 * @tree: A pointer to the root node of the tree to measure it
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bal = 0;
	int right_bal = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_bal = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_bal = 1 + binary_tree_height(tree->right);

	return (left_bal - right_bal);
}
