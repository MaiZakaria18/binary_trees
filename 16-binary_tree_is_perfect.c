#include "binary_trees.h"
/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 * Return: 1 if perfect binary tree otherwise return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	return (0);
}
