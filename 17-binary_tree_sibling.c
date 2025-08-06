#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node.
 * NULL if node is NULL, has no parent, or has no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
