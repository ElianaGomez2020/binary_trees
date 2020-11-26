#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Root node of the tree to meadure the height
 *
 * Return: Height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lev_right = 0, lev_left = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		lev_left = binary_tree_height(tree->left);
		lev_left += 1;
	}
	if (tree->right)
	{
		lev_right = binary_tree_height(tree->right);
		lev_right += 1;
	}
	if (lev_left > lev_right)
		return (lev_left);
	else
		return (lev_right);
}
