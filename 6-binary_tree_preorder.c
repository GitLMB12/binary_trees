#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Function goes through a binary tree using pre-order traversal
 * (NLR). It traverses the left subtree recursively, then the right subtree
 * recursively, and finally the root node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
