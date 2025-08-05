#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        left = 1 + binary_tree_height(tree->left);

    if (tree->right)
        right = 1 + binary_tree_height(tree->right);

    return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor (left height - right height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        left_height = binary_tree_height(tree->left);

    if (tree->right)
        right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}
