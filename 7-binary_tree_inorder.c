#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree inorder.
 * @tree: pointer to the root node of the tree.
 * @func: a pointer to a func that prints the values of each node.
 *
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
