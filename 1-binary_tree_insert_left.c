#include "binary_trees.h"
/**
 *  binary_tree_insert_left - Function that creates a binary tree node
 *  @parent:  is a pointer to the node to insert the left-child in
 *  @value:  is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
