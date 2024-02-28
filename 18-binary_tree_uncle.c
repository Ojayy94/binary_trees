#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that that finds the uncle of a node
 * @node: A pointer to the uncle
 *	  Your function must return a pointer to the sibling node
 *	  If node has no sibling, return NULL
 * Return: If node is NULL return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
                return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
