#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node right-child
 * @parent: Parent node
 * @value: Value  node
 * Return:  new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	if (!parent)
		return (NULL);

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);
	new_n->parent = parent;
	new_n->n = value;
	new_n->right = NULL;
	new_n->left = NULL;
	if (parent->right)
	{
		new_n->right = parent->right;
		parent->right->parent = new_n;
	}
	parent->right = new_n;
	return (new_n);
}
