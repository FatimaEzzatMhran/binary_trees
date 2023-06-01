#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measeure height
 * Return: the height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 1;
		size_t right_height = 1;

		if (tree->left)
			left_height += binary_tree_height(tree->left);

		if (tree->right)
			right_height += binary_tree_height(tree->right);

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - 
		binary_tree_height(tree->right));
}
