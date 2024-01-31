#include "binary_trees.h"

/**
 * binary_tree_size - Computes the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t leftSize = 0;
    size_t rightSize = 0;

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    leftSize = binary_tree_size(tree->left);
    rightSize = binary_tree_size(tree->right);

    return (leftSize + rightSize + 1);
}