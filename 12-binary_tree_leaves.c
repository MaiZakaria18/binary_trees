#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to
 * count the number of leaves
 * Return: number of leaves, 0 if tree is null
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number_of_leaves = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left)
	{
		number_of_leaves++;
	}
	if (tree->right)
	{
		number_of_leaves++;
	}
	return (number_of_leaves);
}
