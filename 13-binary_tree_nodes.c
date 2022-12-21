#include "binary_trees.h"
/*
 *binary_tree_nodes - funtion that count every node
 * @tree: pointer
 * return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
