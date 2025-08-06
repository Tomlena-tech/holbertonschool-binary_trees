#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the right side.
 * @parent: A pointer to a node to insert the right child in.
 * @value: The value to store in the node.
 * Return: A pointer to created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = NULL;

if (parent == NULL && new_node == NULL)
{
return (NULL);
}

new_node = binary_tree_node(parent, value);

if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}  
parent->right = new_node;
return (new_node);
}
