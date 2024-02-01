#include "binary_trees.h"
/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if complete binary tree 0 if not or fail
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
	(tree->right == NULL && tree->parent->right->left == NULL))
		return (1);

	if ((tree->left != NULL && tree->right != NULL) ||
		(tree->left == NULL && tree->right == NULL))
		return (binary_tree_is_complete(tree->left) &&
				binary_tree_is_complete(tree->right));

	return (0);
}
