#include "binary_trees.h"
/**
 * binary_tree_delete - fubction that deletes an entire binary tree.
 * @tree: a pointer to the root of the node of the tree to delete.
 *
 * Return: void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
