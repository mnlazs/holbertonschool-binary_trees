#include "binary_trees.h"
/*
 * binary_tree_dephth - Measures the depth of a binary tree.
 * @tree: pointer to root
 * Return: NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
        return 0;
    }

    size_t depth = 0;
    const binary_tree_t *node = tree;

    while (node->parent)
    {
        depth++;
        node = node->parent;
    }

    return depth;
}
