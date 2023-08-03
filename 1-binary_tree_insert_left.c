#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (!parent)
		return (NULL);

	new_n = binary_tree_node(parent, value);
	if (!new_n)
		return (NULL);

	if (parent->left)
	{
		new_n->left = parent->left;
		new_n->left->parent = new_n;
	}
	parent->left = new_n;
	return (new_n);
}
