#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

// Function to insert a new node in the tree
void insert(struct Node* root, int data) {
    if (root == NULL) {
        root = newNode(data);
        printf("ROOT");
    } else {
        if (root->left == NULL) {
            root->left = newNode(data);
             printf("ROOTLEFT");
        } else {
            root->right = newNode(data);
             printf("ROOTRIGHT");
        }
    }
}

// Function to traverse the tree in-order
void inorder(struct Node* node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    int n, val;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (root == NULL) {
            root = newNode(val);
        } else {
            insert(root, val);
        }
    }
    printf("In-order traversal: ");
    inorder(root);
    return 0;
}
