#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child
 * @parent: a pointer to the parent nodde
 * @value: value to store in the new node.
 * Return: a pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;

	if (new->left)
		new->left->parent = new;

	return (new);
}
