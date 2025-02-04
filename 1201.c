#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int key;
    struct Node *left, *right;
} Node;

Node* createNode(int key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int key) {
    if (root == NULL) return createNode(key);
    if (key < root->key)
        root->left = insertNode(root->left, key);
    else if (key > root->key)
        root->right = insertNode(root->right, key);
    return root;
}

Node* findMax(Node* root) {
    while (root->right) root = root->right;
    return root;
}

Node* removeNode(Node* root, int key) {
    if (root == NULL) return root;
    if (key < root->key)
        root->left = removeNode(root->left, key);
    else if (key > root->key)
        root->right = removeNode(root->right, key);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = findMax(root->left);
        root->key = temp->key;
        root->left = removeNode(root->left, temp->key);
    }
    return root;
}

void storeTraversal(Node* root, int* arr, int* index, int order) {
    if (!root) return;
    
    if (order == 0) arr[(*index)++] = root->key; 
    storeTraversal(root->left, arr, index, order);
    if (order == 1) arr[(*index)++] = root->key; 
    storeTraversal(root->right, arr, index, order);
    if (order == 2) arr[(*index)++] = root->key; 
}

void printTraversal(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int search(Node* root, int key) {
    if (root == NULL) return 0;
    if (root->key == key) return 1;
    if (key < root->key) return search(root->left, key);
    return search(root->right, key);
}

void freeTree(Node* root) {
    if (root) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    Node* root = NULL;
    char command[10];
    int value;
    
    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "I") == 0) {
            scanf(" %d", &value);
            root = insertNode(root, value);
        } else if (strcmp(command, "INFIXA") == 0) {
            int result[100];
            int index = 0;
            storeTraversal(root, result, &index, 1);
            printTraversal(result, index);
        } else if (strcmp(command, "PREFIXA") == 0) {
            int result[100];
            int index = 0;
            storeTraversal(root, result, &index, 0);
            printTraversal(result, index);
        } else if (strcmp(command, "POSFIXA") == 0) {
            int result[100];
            int index = 0;
            storeTraversal(root, result, &index, 2);
            printTraversal(result, index);
        } else if (strcmp(command, "P") == 0) {
            scanf(" %d", &value);
            if (search(root, value))
                printf("%d existe\n", value);
            else
                printf("%d nao existe\n", value);
        } else if (strcmp(command, "R") == 0) {
            scanf(" %d", &value);
            root = removeNode(root, value);
        }
    }
    
    freeTree(root);
    return 0;
}
