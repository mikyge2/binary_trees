#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to add a binary tree node on the left
 * @parent: parent node to add new node to
 * @value: value of new node
 * Return: pointer to newly added node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
