#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_n = NULL;


	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);
	new_n->parent = parent;
	new_n->n = value;
	new_n->right = NULL;
	new_n->left = NULL;
    if (parent->left)
    {
        new_n->left = parent->left;
        parent->left->parent = new_n;
    }
    parent->left = new_n;
	return (new_n);
}