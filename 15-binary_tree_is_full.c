#include "binary_trees.h"

/**
 * is_full_recursive - function that checks if a binary tree is full recursively
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 - if tree is not full
 *         1 - Otherwise
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			is_full_recursive(tree->left) == 0 ||
			is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 - if tree is not full
 *         1 - if Otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
