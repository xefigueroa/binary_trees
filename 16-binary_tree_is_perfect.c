#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 If tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lside, rside;

	if (tree == NULL)
	{
		return (0);
	}

	lside = binary_tree_size(tree->left);
	rside = binary_tree_size(tree->right);

	if (lside == rside)
	{
		return (1);
	}

	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
	{
		return (0);
	}
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (1 + l + r);
}

