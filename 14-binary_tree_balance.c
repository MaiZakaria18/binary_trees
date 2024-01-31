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
 * binary_tree_balance - get the balanve factor
 * @tree: pointer to the nood
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
