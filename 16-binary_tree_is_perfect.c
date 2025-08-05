#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;
    int left_full, right_full;

    if (tree == NULL)
        return (0);

    left_height = height(tree->left);
    right_height = height(tree->right);

    if (left_height != right_height)
        return (0);

    left_full = binary_tree_is_full(tree->left);
    right_full = binary_tree_is_full(tree->right);

    return (left_full && right_full);
}
