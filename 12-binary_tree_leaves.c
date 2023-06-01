#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the num of leaves
 * Return: numbers of leaves or 0 if tree NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right == NULL)
		return (1);

	leaves += binary_trees_leaves(tree->left);
	leaves += binary_trees_leaves(tree->right);

	return (leaves);
}
