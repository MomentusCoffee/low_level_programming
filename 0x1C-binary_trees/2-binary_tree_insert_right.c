#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: point to node to insert right-child
 * @value: value of new node
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *right;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	right = parent->right;
	parent->right = new;

	if (right)
	{
		new->right = right;
		right->parent = new;
	}
	else
		new->right = NULL;
	new->parent = parent;
	new->n = value;
	new->left = NULL;

	return (new);
}
