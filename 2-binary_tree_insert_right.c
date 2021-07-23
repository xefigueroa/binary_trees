#include "binary_trees.h"

/*
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rNew;

	if (parent == NULL)
	{
		return (NULL);
	}

	rNew = binary_tree_node(parent, value);

	if (rNew == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		rNew->right = parent->right;
		parent->right->parent = rNew;
	}
	parent->right = rNew;

	return (rNew);
}
