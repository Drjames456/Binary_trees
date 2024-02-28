#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: An integer which is the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}
	count = 0;
	while (tree->right != NULL)
	{
		count++;
		tree = tree->right;
	}
	return (count);
}
