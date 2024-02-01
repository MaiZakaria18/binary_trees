#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first:  is a pointer to the first node
 * @second: is a pointer to the second node
 * Return:  a pointer to the lowest common ancestor node of the two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *temp_first = (binary_tree_t *) first;
	binary_tree_t *temp_second = (binary_tree_t *) second;

	if (!first || !second)
		return (NULL);

	while (temp_second)
	{
		while (temp_first)
		{
			if (temp_first == temp_second)
			{
				return (temp_first);
			}
			temp_first = temp_first->parent;
		}
		temp_first = (binary_tree_t *) first;
		temp_second = temp_second->parent;
	}
	temp_first = (binary_tree_t *) first;
	temp_second = (binary_tree_t *) second;
	while (temp_first)
	{
		while (temp_second)
		{
			if (temp_first == temp_second)
			{
				return (temp_second);
			}
			temp_second = temp_second->parent;
		}
		temp_second = (binary_tree_t *) second;
		temp_first = temp_first->parent;
	}
	return (NULL);
}
