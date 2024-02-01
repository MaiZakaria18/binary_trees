#include "binary_trees.h"
/**
 * binary_tree_is_bst - function that checks if a binary tree is a valid
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if bst 0 if not or failure
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (tree->left->n <= tree->n && tree->right->n > tree->n)
		return (1);
	return (binary_tree_is_bst(tree->left) &&
	binary_tree_is_bst(tree->right));
}
