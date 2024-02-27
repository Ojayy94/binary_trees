#include "binary_trees.h"

/**
 * binary_tree_delete - P2rogram to delete from a tree
 * @tree: Tree to delete
 * Return: Null if no tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
