#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that that finds the sibling of a node
 * @node: A pointer to the sibling
 *	  Your function must return a pointer to the sibling node
 *	  If node has no sibling, return NULL
 * Return: If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || parent == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
