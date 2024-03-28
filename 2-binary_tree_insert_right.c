#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node
 * @parent: Ptr to the node to insert the right-child in
 * @value: Val to store in the new node
 *
 * Return: Ptr to the created node, or NULL on failure/if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	if (!parent)
		return (NULL);

	/* Allocate memory for the newN */
	newN = malloc(sizeof(binary_tree_t));
	if (!newN)
		return (NULL);

	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = NULL;

	/* If parent already has a right child, update it*/
	if (parent->right)
	{
		newN->right = parent->right;
		parent->right->parent = newN;
	}

	parent->right = newN;

	return (newN);
}
