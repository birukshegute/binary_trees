#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: 0 (success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
