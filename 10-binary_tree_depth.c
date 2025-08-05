#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_depth - measures the depth of a binary tree node.
 * @tree: pointer to the node to measure the depth.
 *
 * Return: depth of the node, or 0 if node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
const binary_tree_t *current = tree;
if (tree == NULL)
return (0);
while (current->parent != NULL)
{
current = current->parent;
depth++;
}
return (depth);
}
