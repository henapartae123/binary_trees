#include "binary_trees.h"
/**
 * binary_tree_nodes - functino that counts the nodes at laest 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes
 *         0 if tree is NULL
 *         NUll if not a leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree)
    {
        nodes += (tree->left || tree->right) ? 1 : 0;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
    }

    return (nodes);
}