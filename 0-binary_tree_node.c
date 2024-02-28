#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new;

	new = malloc(sizeof(struct binary_tree_s));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
	{
		parent = new;
	}
	else
	{
		if (value < parent->n)
		{
			parent->left = new;
		}
		else if (value > parent->n)
		{
			parent->right = new;
		}
	}
	return (new);
}
