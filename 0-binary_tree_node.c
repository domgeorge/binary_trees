#include "binary_trees.h"

/**
 * binary_tree_node - Function creates binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newN;

	/* Allocate memory for the newNode */
	newN = malloc(sizeof(binary_tree_t));
	if (!newN)
		return (NULL);

	/* Initialize the newN */
	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = NULL;

	return (newN);
}
