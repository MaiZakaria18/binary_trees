#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftHeight = 0, rightHeight = 0;

    if (tree == NULL)
        return (0);

    leftHeight = 1 + binary_tree_height(tree->left);
    rightHeight = 1 + binary_tree_height(tree->right);

    if (leftHeight > rightHeight)
        return (leftHeight);
    else
        return (rightHeight);
}