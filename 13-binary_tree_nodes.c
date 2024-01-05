#include "binary_trees.h"
/**
 * binary_tree_nodes- counts the number of nodes with children
 * @tree: pointer to root node of tree
 *
 * Return: number of non leaf nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  nonleaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nonleaf += ((tree->left || tree->right) ? 1 : 0);
		nonleaf += binary_tree_nodes(tree->left);
		nonleaf += binary_tree_nodes(tree->right);
		return (nonleaf);
	}
}
