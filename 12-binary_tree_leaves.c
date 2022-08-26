#include "binary_trees.h"

/**
 * binary_trees_leaves - function that counts the leavesa= in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * 
 * Return: number of leaves
 *         0 if tree is NULL
 *         NUll if not a leaf
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
    
	return (leaves);
}
