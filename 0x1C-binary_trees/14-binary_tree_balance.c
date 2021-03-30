#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = binary_tree_height(tree->left);
	if (tree->right)
		h_right = binary_tree_height(tree->right);
	if (!tree->left)
		h_left--;
	if (!tree->right)
		h_right--;

	return (h_left - h_right);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) + 1);
	else
		return (binary_tree_height(tree->right) + 1);
}
