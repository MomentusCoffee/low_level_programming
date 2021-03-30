#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: point to node to insert left-child
 * @value: value of new node
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *left;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	left = parent->left;
	parent->left = new;

	if (left)
	{
		new->left = left;
		left->parent = new;
	}
	else
		new->left = NULL;
	new->parent = parent;
	new->n = value;
	new->right = NULL;

	return (new);
}
