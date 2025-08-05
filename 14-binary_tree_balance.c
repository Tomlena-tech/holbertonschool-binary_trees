#include "binary_trees.h"


/**
 * binary_tree_height - Calcule la hauteur d’un arbre binaire.
 * @tree: Pointeur vers la racine de l’arbre.
 * Return: Hauteur de l’arbre, ou 0 si NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}


/**
 * binary_tree_depth - Calcule la profondeur d’un nœud dans l’arbre.
 * @node: Pointeur vers le nœud dont on veut la profondeur.
 * Return: Profondeur du nœud, ou 0 si NULL ou racine.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
    size_t depth = 0;

    if (node == NULL)
        return (0);

    while (node->parent != NULL)
    {
        depth++;
        node = node->parent;
    }

    return (depth);
}
