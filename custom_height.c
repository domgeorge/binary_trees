#include "binary_trees.h"

/**
 * custom_height - Function measures the height of a binary tree
 * @tree: Ptr to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t custom_height(const binary_tree_t *tree)
{
        size_t left, right;

        if (!tree)
                return (0);

        /* Measures the height of the left and right subtrees */
        left = custom_height(tree->left);
        right = custom_height(tree->right);

        return ((left > right ? left : right) + 1);
}
