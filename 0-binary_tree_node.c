#include "binary_trees.h"
/**
 *  binary_tree_node - Function that creates a binary tree node
 *  @parent:  is a pointer to the parent node of the node to create
 *  @value:  is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *fresh_node = NULL;

    fresh_node = malloc(sizeof(binary_tree_t));

    if (fresh_node == NULL)
        return (NULL);

    fresh_node->parent = parent;
    fresh_node->n = value;
    fresh_node->left = NULL;
    fresh_node->right = NULL;
    return (fresh_node);
}
