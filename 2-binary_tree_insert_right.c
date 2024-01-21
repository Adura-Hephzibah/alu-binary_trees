#include "binary_trees.h"
/**
 *  binary_tree_insert_right - Function that inserts a
 * node as the right-child of another node
 *  @parent:  is a pointer to the node to insert the right-child in
 *  @value:  is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
