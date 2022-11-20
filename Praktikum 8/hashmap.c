// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "hashmap.h"
#include "boolean.h"

void CreateEmpty(HashMap *M) {
    int i ;
    i = 0 ;
    (*M).Count = 0;
    for (i; i < MaxEl; i++) {
        (*M).Elements[i].Key = -9999;
        (*M).Elements[i].Value = -9999;
    }
}

address Hash(keytype K) {
    return (K % MaxEl) ;
}

valuetype Value(HashMap M, keytype k) {
    int i;
    boolean found;

    i = Hash(k);
    found = false;

    while (i < MaxEl && !found) {
        if (M.Elements[i].Key == k) {
            found = true;
        } 
        else {
            i++;
        }
    }

    if (found == true) {
        return M.Elements[i].Value;
    } 
    else {
        return Undefined;
    }
}

void Insert(HashMap *M, keytype k, valuetype v) {
    int i;

    i = Hash(k);

    while ((*M).Elements[i].Key != Undefined && (*M).Elements[i].Key != k) {
        i = (i + 1) % MaxEl;
    }

    if ((*M).Elements[i].Key == Undefined) {
        (*M).Count++;
    }

    (*M).Elements[i].Key = k;
    (*M).Elements[i].Value = v;
}