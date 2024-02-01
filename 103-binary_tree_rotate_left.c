#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function that performs a
 * left-rotation on a binary tree
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_tree;

	if (!tree || !tree->right)
	{
		return (NULL);
	}

	new_tree = tree->right;
	new_tree->parent = NULL;
	tree->right = new_tree->left;

	if (tree->right)
		tree->right->parent = tree;

	new_tree->left = tree;
	tree->parent = new_tree;
	return (new_tree);
}
