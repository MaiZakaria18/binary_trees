#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the depth of
 * a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: the depth , 0 if tree is null
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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if perfect binary tree otherwise return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if ((tree->left != NULL && tree->right != NULL) &&
	(binary_tree_height(tree->left) == binary_tree_height(tree->right)))
	{
		return (1);
	}
	return (0);
}
