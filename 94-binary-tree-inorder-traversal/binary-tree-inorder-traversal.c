#include <stdlib.h>

int countNodes(struct TreeNode* root) {
    if (root == NULL) 
    return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inorderHelper(struct TreeNode* root, int* result, int* index) {
    if (root == NULL) 
    return;

    inorderHelper(root->left, result, index);
    result[(*index)++] = root->val;
    inorderHelper(root->right, result, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {

    *returnSize = countNodes(root);
    
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    int index = 0;
    inorderHelper(root, result, &index);
    
    return result;
}