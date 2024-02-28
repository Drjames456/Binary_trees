#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root.
 * @node: The node to check if root.
 * Return: 1 for true and 0 for false.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->parent == NULL)
		{
			return (1);
		}
		return (0);
	}
}
