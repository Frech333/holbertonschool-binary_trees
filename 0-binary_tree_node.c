#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
int main(void)
{
    binary_tree_t *root = NULL;

    root = binary_tree_node(NULL, 42); // Create a binary tree node

    if (root == NULL)
    {
        printf("Node creation failed.\n");
        return (1);
    }

    printf("Node created with value: %d\n", root->n);

    return (0);
}
