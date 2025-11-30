/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {

    /*if (key % m < 0) {
        key % m += m;
    }*/
    
    if (key < 0) {
        key = -key;
    }

    return key % m;
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
    unsigned char c;

    while ((c = (unsigned char)*str++) != '\0') {
        hash += c;
    }
    return (int)(hash % m); // basic division method
}
