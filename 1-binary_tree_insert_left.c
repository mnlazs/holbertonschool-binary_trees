#include "binary_trees.h"
/*
 * binary_tree_t - funtion that insert a node in the left son
 * @parent: puntero 
 * @n: valor para almacenar el nuevo nodo
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int n)
{
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->n = n;
    new_node->left = parent->left;
    new_node->right = NULL;

    parent->left = new_node;

    return new_node;
}

