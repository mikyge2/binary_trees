#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to add a binary tree node on the right
 * @parent: parent node to add new node to
 * @value: value of new node
 * Return: pointer to newly added node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
