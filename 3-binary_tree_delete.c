#include "binary_trees.h"
/**
 * binary_tree_delete - Inserts a node right-child
 * @tree: Root node of the binary tree
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
	}
	free(tree);
}
