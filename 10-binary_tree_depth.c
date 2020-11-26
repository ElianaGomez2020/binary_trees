#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 * @tree: Root node of the tree to meadure the depth
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t prof = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		prof = binary_tree_depth(tree->parent);
		prof += 1;
	}
	return (prof);
}
