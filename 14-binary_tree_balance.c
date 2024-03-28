#include "binary_trees.h"

/**
 * binary_tree_balance - Function measures the balance factor of a binary tree
 * @tree: Ptr to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL or balance factor otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int htl, htr;

	if (!tree)
		return (0);

	/* Measures the height of the left and right subtrees */
	htl = custom_height(tree->left);
	htr = custom_height(tree->right);

	return (htl - htr);
}
