#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		nodes_count = (binary_tree_nodes(tree->left) +
					   binary_tree_nodes(tree->right)) +
					  1;
	}

	return (nodes_count);
}
