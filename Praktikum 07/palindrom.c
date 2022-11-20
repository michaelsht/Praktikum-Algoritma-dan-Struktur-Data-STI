// Michael Sihotang
// 18221054

#include <stdio.h>
#include "stack.h"

int main() {
    // KAMUS
    Stack S, S_inverse;
    int x, i, val;
    boolean found;
    // ALGORITMA
    CreateEmpty(&S);
    CreateEmpty(&S_inverse);
    found = false;

    scanf("%d", &x);
    while (x != 0) {
        Push(&S, x);
        scanf("%d", &x);
    }

    if (IsEmpty(S)) {
        printf("Stack kosong\n");
    } 
    else {
        for (i = Top(S); i >= 0; i--) {
            Push(&S_inverse, S.T[i]);
        }

        while (!IsEmpty(S) && !found) {
            if (InfoTop(S) != InfoTop(S_inverse)) {
                found = true;
            }
            Pop(&S, &val);
            Pop(&S_inverse, &val);
        }

        if (found) {
            printf("Bukan Palindrom\n");
        } 
        else {
            printf("Palindrom\n");
        }
    }

    return 0;
}