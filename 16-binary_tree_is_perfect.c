#include "binary_trees.h"
/**
 * max - that calculate the max value
 * @a: first value
 * @b: second value
 * Return: the max value
*/
int max(int a, int b)
{
	return (a > b ? a : b);
}
/**
 * height - get height of binary tree
 * @tree: pointer to the nood
 * Return: the height
*/
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height(tree->left), height(tree->right)));
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
	if ((height(tree->left) == height(tree->right)) &&
	(tree->left != NULL && tree->right != NULL))
	{
		return (1);
	}
	return (0);
}