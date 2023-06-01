#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the trees to measure size
 * Return: the size of a tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_side, left_side;

	if (tree == NULL)
		return (0);

	right_side = binary_tree_size(tree->right);
	left_side = binary_tree_size(tree->left);

	return (1 + right_side + left_side);
}
