#include "binary_trees.h"


/**
 * size_t binary_tree_depth - A function that measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: Depth of the tree
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;


	if (tree == NULL)
	{
		return (0);
	}
	count = 0;
	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
