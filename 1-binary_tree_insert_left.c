
#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as the left side.
 * @parent: A pointer to a node to insert the left child in.
 * @value: The value to store in the node.
 * Return: A pointer to created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    new_node = NULL;

	if (parent == NULL && new_node == NULL)
	{
	    return (NULL);
	}

	new_node = binary_tree_node(parent, value);
    new_node->left = NULL;
    new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;
    new_node->parent = parent;

	return (new_node);
}
