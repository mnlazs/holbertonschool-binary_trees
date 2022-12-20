#include "binary_trees.h"
/**
 * binary_tree_postorder - funtion that walk thought the tree postorder
 * @tree: pointer
 * @func: pointer
 * Return: postorder
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

