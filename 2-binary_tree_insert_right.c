#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as right child.
 * @parent: A pointer to the parent node of the node to insert.
 * @value: The value to put in the new node.
 * Return: A pointer to the created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new, *tmp;

	new = malloc(sizeof(struct binary_tree_s));
	if (new == NULL || parent == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		tmp = parent->right;
		tmp->n = parent->right->n;
		tmp->parent = new;
		tmp->left = NULL;
		tmp->right = NULL;
		parent->right = new;
		new->right = tmp;
	}
	return (new);
}
