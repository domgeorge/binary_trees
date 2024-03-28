#include "binary_trees.h"

/**
 * tree_level - Function level of a binary tree
 * @tree: Ptr to the root of the tree
 * @a: Tree level
 * @func: Executed function
 */
void tree_level(const binary_tree_t *tree, size_t a, void (*func)(int))
{
	if (!tree)
		return;
	if (a == 1)
		func(tree->n);
	else if (a > 1)
	{
		tree_level(tree->left, a - 1, func);
		tree_level(tree->right, a - 1, func);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree via level-order
 * @tree: Ptr to the root node of the tree to traverse
 * @func: Ptr to a func to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t length, i;

	if (!tree || !func)
		return;

	/* Measure the height of the tree */
	length = custom_height(tree);

	/* Traverse the tree level by level */
	for (i = 1; i <= length; i++)
		tree_level(tree, i, func);
}
