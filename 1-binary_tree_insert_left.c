#include "binary_trees.h"

/**
 * binary_tree_insert_left - Pointer to insert at left
 * @parent: Pointer to the parent node
 * @value: Value for new node
 * Return: Null on parent failure otherwise return a pointer to left node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
