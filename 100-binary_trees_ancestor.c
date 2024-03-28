#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function finds the lowest common ancestor of two nodes
 * @first: Ptr to the first node
 * @second: Ptr to the second node
 *
 * Return: Ptr to the lowest common ancestor,or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *assec, *asfst = first;

	if (!first || !second)
		return (NULL);

	/* Traverse upwards from the first or the second node to the root */
	while (asfst)
	{
		assec = second;

		while (assec)
		{
			/* Check if a common ancestor is found */
			if (asfst == assec)
				return ((binary_tree_t *)asfst);

			/* Move up to the parent of the second or first ancestor */
			assec = assec->parent;
		}

		asfst = asfst->parent;
	}

	return (NULL);
}
