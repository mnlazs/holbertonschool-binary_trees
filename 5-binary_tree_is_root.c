#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if the node give is a root
 * @node: pointer
 * Return: 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL);
}
