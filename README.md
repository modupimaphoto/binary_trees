# 0x1D. C - Binary trees

## General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree


**Binary Tree:**
A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, which are referred to as the left child and the right child. The topmost node is called the root. Nodes with no children are called leaves. In a binary tree, each node can have a left subtree and a right subtree.

**Binary Search Tree (BST):**
A Binary Search Tree is a special type of binary tree where the left child of a node contains only values less than the node's value, and the right child contains only values greater than the node's value. This property makes searching for a particular value more efficient in comparison to a regular binary tree.

**Difference Between Binary Tree and Binary Search Tree:**
While both are binary trees, the key distinction is that in a Binary Search Tree, the left subtree contains values smaller than the node, and the right subtree contains values greater than the node.

**Time Complexity Gain Compared to Linked Lists:**
Binary trees, especially Binary Search Trees, provide significant time complexity advantages over linked lists for certain operations. Searching, insertion, and deletion operations in a well-balanced BST have an average time complexity of O(log n), which is more efficient than the O(n) time complexity of linked lists.

**Properties of a Binary Tree:**
- **Depth:** The depth of a node is the number of edges from the root to that node.
- **Height:** The height of a tree is the length of the longest path from the root to a leaf. The height of an empty tree is typically considered -1.
- **Size:** The size of a binary tree is the total number of nodes in the tree.

**Traversal Methods for Binary Trees:**
1. **Inorder Traversal:** Left subtree, root, right subtree.
2. **Preorder Traversal:** Root, left subtree, right subtree.
3. **Postorder Traversal:** Left subtree, right subtree, root.

**Types of Binary Trees:**
1. **Complete Binary Tree:** Every level, except possibly the last, is completely filled, and all nodes are as left as possible.
2. **Full Binary Tree:** Every node has either 0 or 2 children (no node has only one child).
3. **Perfect Binary Tree:** A binary tree in which all interior nodes have two children, and all leaves have the same depth.
4. **Balanced Binary Tree:** A binary tree is balanced if the height of the left and right subtrees of any node differ by no more than one.

Each type of binary tree has its own characteristics and may be suitable for different use cases or operations.
