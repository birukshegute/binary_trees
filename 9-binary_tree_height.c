#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;
	size_t d = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			d = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((h > d) ? h : d);
	}
}
