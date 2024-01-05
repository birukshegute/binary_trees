#include "binary_trees.h"
/**
 * binary_tree_leaves -counts the number of leaves in a tree
 * @tree: pointer to root nod of the tree
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, h = 0, d = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		h = binary_tree_leaves(tree->left);
		d = binary_tree_leaves(tree->right);
		leaf = h + d;
		return ((!h && !d) ? leaf + 1 : leaf + 0);
	}
}
