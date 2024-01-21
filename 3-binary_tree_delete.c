#include "binary_trees.h"
/**
 *  binary_tree_delete - Function that deletes an entire binary tree
 *  @tree:  is a pointer to the node to insert the right-child in
 * Return: if tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left); /* Recursive delete for left side of tree*/
	binary_tree_delete(tree->right); /* Recursive delete for right side of tree*/
	free(tree);
}
