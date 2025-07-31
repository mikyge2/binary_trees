# Binary Trees in C

This repository contains C implementations of various binary tree operations, including Binary Search Trees (BST), AVL Trees, and Heaps. It is structured around data structure manipulation and algorithmic functions for creating, modifying, and evaluating binary trees.

## 📁 Project Structure

Each file in the repository corresponds to a specific binary tree function or task. Below is an organized overview:

### Core Binary Tree Functions

* `0-binary_tree_node.c` – Create a binary tree node
* `1-binary_tree_insert_left.c` – Insert a node as the left-child
* `2-binary_tree_insert_right.c` – Insert a node as the right-child
* `3-binary_tree_delete.c` – Delete an entire binary tree
* `4-binary_tree_is_leaf.c` – Check if a node is a leaf
* `5-binary_tree_is_root.c` – Check if a node is the root

### Tree Traversals

* `6-binary_tree_preorder.c` – Pre-order traversal
* `7-binary_tree_inorder.c` – In-order traversal
* `8-binary_tree_postorder.c` – Post-order traversal

### Tree Properties

* `9-binary_tree_height.c` – Tree height
* `10-binary_tree_depth.c` – Node depth
* `11-binary_tree_size.c` – Tree size
* `12-binary_tree_leaves.c` – Number of leaves
* `13-binary_tree_nodes.c` – Number of nodes with at least one child

### Tree Evaluations

* `14-binary_tree_balance.c` – Balance factor
* `15-binary_tree_is_full.c` – Full tree check
* `16-binary_tree_is_perfect.c` – Perfect tree check
* `101-binary_tree_levelorder.c` – Level-order traversal
* `102-binary_tree_is_complete.c` – Complete tree check

### Family Relationships

* `17-binary_tree_sibling.c` – Find a node's sibling
* `18-binary_tree_uncle.c` – Find a node's uncle
* `100-binary_trees_ancestor.c` – Lowest common ancestor

### Binary Search Tree (BST) Operations

* `110-binary_tree_is_bst.c` – Validate BST
* `111-bst_insert.c` – Insert into BST
* `112-array_to_bst.c` – Build BST from array
* `113-bst_search.c` – Search BST
* `114-bst_remove.c` – Remove from BST

### AVL Tree Operations

* `120-binary_tree_is_avl.c` – Validate AVL tree
* `121-avl_insert.c` – Insert into AVL tree
* `122-array_to_avl.c` – Build AVL tree from array
* `123-avl_remove.c` – Remove from AVL tree
* `103-binary_tree_rotate_left.c` – Left rotation
* `104-binary_tree_rotate_right.c` – Right rotation

### Heap Operations

* `130-binary_tree_is_heap.c` – Validate Max Binary Heap
* `131-heap_insert.c` – Insert into Max Heap
* `132-array_to_heap.c` – Build Heap from array
* `133-heap_extract.c` – Extract root from Max Heap
* `134-heap_to_sorted_array.c` – Heap sort to array

### Utility Files

* `binary_trees.h` – Header file with all function prototypes and data structures
* `Makefile` – For compiling all files
* `README.md` – Project overview (you are here)

### Optimization Files

* `115-O`, `125-O`, `135-O` – Optimized versions of specific operations (context-specific)

## 🛠 Compilation

To compile all files:

```bash
make
```

To compile an individual file:

```bash
gcc -Wall -Wextra -Werror -pedantic file.c -o output
```

## 🧪 Testing

Use the `main` functions (not included here) or custom test files to validate each implementation. The Makefile can be modified to support test cases per function.

## 📚 Learning Objectives

This project was designed to:

* Understand the structure and behavior of binary trees, BSTs, AVL Trees, and Heaps
* Practice recursive algorithms and memory management in C
* Learn tree rotations and balance validations

## 👤 Author

This repository was authored by [mikyge2](https://github.com/mikyge2).

## 📝 License

This project is open-source and available under the MIT License.
