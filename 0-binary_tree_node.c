#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: value assigned to the new node
 *
 * Return: A new node or NULL if fails.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node;
	created_node = calloc(1, sizeof(binary_tree_t)); // Allocating memory and initializing to zero
	if (!created_node)
		return (NULL);
	
	created_node->n = value;
	created_node->parent = parent;
	return (created_node);
}
