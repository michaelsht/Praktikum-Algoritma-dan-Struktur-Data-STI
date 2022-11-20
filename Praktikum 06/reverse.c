# include <stdio.h>
# include "reverse.h"

// Michael Sihotang
// 18221054

void transferReverse(Queue* q1, Queue* q2){
    //inisialisasi indeks pertama dan tail q2
    (*q2).HEAD=(*q1).HEAD;
    (*q2).TAIL=(*q1).TAIL;
    ElType a; 
    for (int i=(*q1).HEAD;i<=(*q1).TAIL;i++){
        a = Pop(q1);
        (*q2).Tab[(*q2).TAIL-i] = a;
    }
}