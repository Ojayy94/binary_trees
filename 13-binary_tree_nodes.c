#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_nodes(tree.left) +
			binary_tree_nodes(tree.right));
}
