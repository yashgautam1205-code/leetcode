#include <stdio.h>
#include <stdlib.h>

// Structure for Hash Table Node
struct HashNode {
    int key;
    int value;
    struct HashNode* next;
};

// Structure for Hash Table
struct HashTable {
    int size;
    struct HashNode** table;
};

// Hash function
int hash(int key, int size) {
    int h = key % size;
    return h < 0 ? h + size : h;
}

// Insert into Hash Table
void insert(struct HashTable* ht, int key, int value) {
    int index = hash(key, ht->size);
    struct HashNode* newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

// Search in Hash Table
struct HashNode* search(struct HashTable* ht, int key) {
    int index = hash(key, ht->size);
    struct HashNode* cursor = ht->table[index];
    while (cursor != NULL) {
        if (cursor->key == key) {
            return cursor;
        }
        cursor = cursor->next;
    }
    return NULL;
}

// Free Hash Table memory
void freeHashTable(struct HashTable* ht) {
    for (int i = 0; i < ht->size; i++) {
        struct HashNode* cursor = ht->table[i];
        while (cursor != NULL) {
            struct HashNode* temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }
    free(ht->table);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    
    struct HashTable ht;
    ht.size = numsSize * 2;
    ht.table = (struct HashNode**)calloc(ht.size, sizeof(struct HashNode*));
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        struct HashNode* found = search(&ht, complement);
        if (found != NULL) {
            result[0] = found->value;
            result[1] = i;
            freeHashTable(&ht);
            return result;
        }
        
        insert(&ht, nums[i], i);
    }
    
    freeHashTable(&ht);
    *returnSize = 0;
    return NULL;
}