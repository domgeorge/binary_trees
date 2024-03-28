#include "binary_trees.h"

/**
 * binary_tree_height - Func measures the height of a binary tree
 * @tree: Ptr to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t htl, htr;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* Recursively measure the height of the left or right subtree */
	htl = binary_tree_height(tree->left);
	htr = binary_tree_height(tree->right);

	return ((htl > htr ? htl : htr) + 1);
}
