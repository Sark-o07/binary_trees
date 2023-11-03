#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree in post-order.
 * @tree: a pointer to the root node of the tree.
 * @func: a pointer to a function that prints the value for each node.
 * Return: None or NULL if tree or func.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return (NULL);

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
