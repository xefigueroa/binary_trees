#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent of node to create
 * @value: value to store in new node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeNew;

	nodeNew = malloc(sizeof(binary_tree_t));

	if (nodeNew == NULL)
	{
		return (NULL);
	}

	nodeNew->parent = parent;
	nodeNew->n = value;
	nodeNew->left = nodeNew->right = NULL;
	return (nodeNew);
}
