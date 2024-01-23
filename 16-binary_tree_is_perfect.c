#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size =  (binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1;

	return (size);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_arm = 0, right_arm = 0;

	if (!tree)
		return (0);

	left_arm = binary_tree_size(tree->left);
	right_arm = binary_tree_size(tree->right);

	if (left_arm == right_arm)
		return (1);

	return (0);
}
