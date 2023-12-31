#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in preorder.
 * @tree: a pointer to the root node.
 * @func: a pointer to a function to call for each node.
 *
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
