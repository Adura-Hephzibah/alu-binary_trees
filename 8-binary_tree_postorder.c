#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a
 * binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to call for each node.
 * Return: 1 if node is a leaf, otherwise 0 and 0 if node is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{

		/* Traverse left side with recursively */
		binary_tree_postorder(tree->left, func);

		/* Traverse right side with recursively */
		binary_tree_postorder(tree->right, func);

		func(tree->n);
	}
}
