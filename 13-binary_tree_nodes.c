#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree
 *
 * @tree: a pointer to the root node of the
 * tree to count the number of nodes
 *
 * Return: 0 if tee is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counted_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	counted_nodes = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (counted_nodes);
}
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (size);
}
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to
 * count the number of leaves
 *
 * Return: 0 if tree is NUll
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counted_leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	counted_leaves = binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right);

	return (counted_leaves);
}
