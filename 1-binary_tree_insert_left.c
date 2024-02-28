#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as left child.
 * @parent: A pointer to the parent node of the node to insert.
 * @value: The value to put in the new node.
 * Return: A pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new, *tmp;

	new = malloc(sizeof(struct binary_tree_s));
	if (new == NULL || parent == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		tmp = parent->left;
		tmp->n = parent->left->n;
		tmp->parent = new;
		tmp->left = NULL;
		tmp->right = NULL;
		parent->left = new;
		new->left = tmp;
	}
	return (new);
}
