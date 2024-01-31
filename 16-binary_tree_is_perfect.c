#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rightHeight = binary_tree_height(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			binary_tree_height(tree->left) == binary_tree_height(tree->right));
}
