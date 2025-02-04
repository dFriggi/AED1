#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char key;
    struct Node *left, *right;
} Node;

Node* createNode(char key) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, char key) {
    if (root == NULL) return createNode(key);
    if (key < root->key)
        root->left = insertNode(root->left, key);
    else if (key > root->key)
        root->right = insertNode(root->right, key);
    return root;
}

void storeTraversal(Node* root, char* arr, int* index, int order) {
    if (!root) return;
    
    if (order == 0) arr[(*index)++] = root->key; // Pré-ordem
    storeTraversal(root->left, arr, index, order);
    if (order == 1) arr[(*index)++] = root->key; // Em ordem
    storeTraversal(root->right, arr, index, order);
    if (order == 2) arr[(*index)++] = root->key; // Pós-ordem
}

void printTraversal(char* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (i > 0) printf(" ");
        printf("%c", arr[i]);
    }
    printf("\n");
}

int search(Node* root, char key) {
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
    char command[10], value;
    
    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "I") == 0) {
            scanf(" %c", &value);
            root = insertNode(root, value);
        } else if (strcmp(command, "INFIXA") == 0) {
            char result[52]; // Máximo de letras do alfabeto
            int index = 0;
            storeTraversal(root, result, &index, 1);
            printTraversal(result, index);
        } else if (strcmp(command, "PREFIXA") == 0) {
            char result[52];
            int index = 0;
            storeTraversal(root, result, &index, 0);
            printTraversal(result, index);
        } else if (strcmp(command, "POSFIXA") == 0) {
            char result[52];
            int index = 0;
            storeTraversal(root, result, &index, 2);
            printTraversal(result, index);
        } else if (strcmp(command, "P") == 0) {
            scanf(" %c", &value);
            if (search(root, value))
                printf("%c existe\n", value);
            else
                printf("%c nao existe\n", value);
        }
    }
    
    freeTree(root);
    return 0;
}
