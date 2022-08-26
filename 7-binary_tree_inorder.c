#include "binary_trees.h"

/**
 * binary_tree_inorder -  function that goes through a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *          the value in the node must be passed as a parameter 
 * 
 * Return: if tree or func do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
        func(tree->n);
        
	}
}
