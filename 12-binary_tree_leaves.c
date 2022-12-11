#include "binary_trees.h"

/**
 * binary_trees_leaves - Counts the leavesa= in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * 
 * Return: number of leaves
 *         0 if tree is NULL
 *         NUll if not a leaf
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
