#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t power = 0;
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	power = (size_t)pow_recursion(2, height + 1);
	nodes = binary_tree_size(tree);

	power = (size_t)pow_recursion(2, height + 1);

	return (power - 1 == nodes);
}
/**
 * pow_recursion - raise value of x to the power of y
 *
 * @x: first value
 * @y: second value
 *
 * Return: x to the power y, otherwise -1
 */
int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * pow_recursion(x, y - 1));
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
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;
	size_t height;

	if (!tree)
		return (0);

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height = height_l > height_r ? height_l : height_r;

	return (height);
}
