#include "binary_trees.h"

/**
 * binary_tree_preorder - program to traverse a root
 * @tree: Tree to check
 * @func: Pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
