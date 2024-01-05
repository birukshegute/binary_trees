#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is root or not
 * @node: the node to be checked
 *
 * Return: 1 for root node, 0 for null or non root node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
