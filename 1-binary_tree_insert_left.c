#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node,or NULL on failure/if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	if (!parent)
		return (NULL);

	/* Allocate memory for the newNode */
	newN = malloc(sizeof(binary_tree_t));
	if (!newN)
		return (NULL);

	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = NULL;

	if (parent->left)
	{
		newN->left = parent->left;
		parent->left->parent = newN;
	}

	parent->left = newN;

	return (newN);
}
