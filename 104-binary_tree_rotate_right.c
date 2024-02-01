#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs a
 * right-rotation on a binary tree
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_tree;
	binary_tree_t *left_right = tree->left->right;

	if (!tree || !tree->left)
	{
		return (NULL);
	}
	new_tree = tree->left;
	new_tree->parent = NULL;
	new_tree->right = tree;
	tree->parent = new_tree;
	tree->left = left_right;
	return (new_tree);
}
