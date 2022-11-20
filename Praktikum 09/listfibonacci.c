#include <stdio.h>
#include "listlinier.h"

int main() {
    List fibonacci;
    CreateEmpty(&fibonacci);

    infotype el;
    scanf("%d", &el);

    // Masukkan kode program disini

    if (el == 0) {
        // Masukkan kode program disini
        
        PrintInfo(fibonacci);
    } else if (el == 1) {
        infotype x;
        scanf("%d", &x);
        InsVLast(&fibonacci,x);
        PrintInfo(fibonacci);
    } else {
        infotype x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        InsVLast(&fibonacci,x);
        InsVLast(&fibonacci,y);
        address p =First(fibonacci);
        address q=Next(p);
        int i=2;
        while (i<el){
            infotype elmt=Info(p)+Info(q);
            InsVLast(&fibonacci, elmt);
            p=q;
            q=Next(q);
            i++;
        }
        PrintInfo(fibonacci);
    }
    return 0;
}