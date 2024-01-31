#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if perfect binary tree otherwise return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leftDepth;
	size_t rightDepth;
	
	if (tree == NULL)
	{
		return (0);
	}

	leftDepth = binary_tree_is_perfect(tree->left);
	rightDepth = binary_tree_is_perfect(tree->right);

	if (leftDepth > rightDepth)
	{
		return (leftDepth + 1);
	}
	else
	{
		return (rightDepth + 1);
	}
}