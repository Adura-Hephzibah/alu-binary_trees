#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a
 * binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to call for each node.
 * Return: 1 if node is a leaf, otherwise 0 and 0 if node is NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{

		/* Traverse left side with recursively */
		binary_tree_inorder(tree->left, func);

		func(tree->n);

		/* Traverse right side with recursively */
		binary_tree_inorder(tree->right, func);
	}
}
