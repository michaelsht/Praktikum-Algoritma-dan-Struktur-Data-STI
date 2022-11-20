/* Tuliskan header di sini berisi nama, dll */

#include <stdio.h>
#include "listsirkuler.h"

int ElemenKeN(List L, int r) {
    address P;
    int i;

    P = First(L);
    i = 0;

    while (i < r) {
        P = Next(P);
        i++;
    }

    return Info(P);
}

int main () {
    List L;
    int r, X, i;

    i = 0;

    CreateEmpty(&L);

    scanf("%d", &X);

    while (X != 0) {
        InsVLast(&L, X);
        scanf("%d", &X);

        i++;
    }

    scanf("%d", &r);

    if (i == 0) {
        printf("List Kosong\n");
    }
    else{
        printf("%d\n", ElemenKeN(L, r));
    }

    return 0;
}