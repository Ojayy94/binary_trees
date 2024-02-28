#include "binary_trees.h"

/**
 * binary_tree_is_full- A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree);
{
	if (!tree)
		return (0);

	if (!(tree->left)) && (!(tree->right))
		return (1);

	if (tree->left)
		return (binary_tree_is_full(tree->left));

	if (tree->right)
		return (binary_tree_is_full(tree->right));

	return (0);
}
