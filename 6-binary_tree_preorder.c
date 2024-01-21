#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a
 * binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to call for each node.
 * Return: 1 if node is a leaf, otherwise 0 and 0 if node is NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);

		/* Traverse left side with recursively */
		binary_tree_preorder(tree->left, func);

		/* Traverse right side with recursively */
		binary_tree_preorder(tree->right, func);
	}
}
