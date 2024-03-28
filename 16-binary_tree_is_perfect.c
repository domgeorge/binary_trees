#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function checks if a binary tree is perfect
 *
 * @tree: Ptr to the root node of the tree to check
 *
 * Return: 0 if tree is NULL/not perfect,1 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lfth, rhth;

	if (tree == NULL)
		return (0);

	lfth = custom_height(tree->left);
	rhth = custom_height(tree->right);

	if (lfth == rhth)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
