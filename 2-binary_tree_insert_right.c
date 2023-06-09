#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* there's no node to insert the new right child into */
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/* if the parent has no right children */
	if (parent->right == NULL)
		parent->right = new_node;
	/* parent has right children */
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}
