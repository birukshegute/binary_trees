#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf node
 * @node: is a pointer to the node to check
 *
 * Return: 1 for leaf node, 0 for null or non leaf node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
