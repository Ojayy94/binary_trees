#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that measures the node of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		node = 1;
	
	if (tree->left)
		node += binary_tree_nodes(tree->left);

	if (tree->right)
		node += binary_tree_nodes(tree->right);

	return (node);
}
