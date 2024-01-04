#include "binary_trees.h"

/***
 * binary_tree_node - Create a new node for binary tree
 * @parent: parent node
 * @value: value of parent node
 *
 * Return - new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}
