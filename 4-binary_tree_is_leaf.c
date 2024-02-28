#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf.
 * @node: The node to check if leaf.
 * Return: For leaf returns 1, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->right == NULL && node->left == NULL)
		{
			return (1);
		}
		return (0);
	}
}
