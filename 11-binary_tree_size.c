#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, d = 0, h = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		h = binary_tree_size(tree->left);
		d = binary_tree_size(tree->right);
		size = h + d + 1;
	}
	return (size);
}
