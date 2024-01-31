#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes with at least one child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftSize = 0;
	size_t rightSize = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		leftSize = binary_tree_nodes(tree->left);
		rightSize = binary_tree_nodes(tree->right);

		return (leftSize + rightSize + 1);
	}

	return (0);
}
