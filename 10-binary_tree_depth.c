#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the root node of the tree to measeure depth
 * Return: the depth of the tree, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
