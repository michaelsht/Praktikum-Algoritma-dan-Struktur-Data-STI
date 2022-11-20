// Michael Sihotang
// 18221054

# include <stdio.h>
# include "circular_queue.h"
# include "boolean.h"

boolean IsEmpty (Queue Q) {
    return ((Q.HEAD == NIL) && (Q.TAIL == NIL));
}

boolean IsFull (Queue Q) {
    return (Length(Q) == Q.MaxEl);
}

int Length (Queue Q) {
    int length;
    if (IsEmpty(Q)){
        length = 0;
    }
    else if(Q.HEAD > Q.TAIL){
        length = (Q.TAIL + 1) + (Q.MaxEl - Q.HEAD);
    }
    else if(Q.HEAD <= Q.TAIL){
        length = Q.TAIL - Q.HEAD + 1;
    }
    return length;
}

int MaxLength (Queue Q) {
    return Q.MaxEl;
}

Queue CreateQueue (int Max) {
    Queue Q;
    Q.Tab = (ElType *) malloc (Max * sizeof(ElType));
    if (Q.Tab != NULL){
        Q.MaxEl = Max;
        Q.HEAD = NIL;
        Q.TAIL = NIL;
    }
    else{
        Q.MaxEl = 0;
    }
    return Q;
}

void DeleteQueue (Queue * Q) {
    (*Q).MaxEl = 0;
    free((*Q).Tab);
}

void Push (Queue * Q, ElType X) {
    if (IsEmpty(*Q)){
        (*Q).HEAD=0;
        (*Q).TAIL=0;     
    }
    else{
        (*Q).TAIL=((*Q).TAIL+1)%(*Q).MaxEl;
    }
    (*Q).Tab[(*Q).TAIL]=X;
}

ElType Pop (Queue * Q) {
    ElType x=(*Q).Tab[(*Q).HEAD];
    if (Length(*Q)==1){
        (*Q).HEAD=NIL;
        (*Q).TAIL=NIL;
    }
    else{
        (*Q).HEAD=((*Q).HEAD+1)%(*Q).MaxEl;
    }
    return x;
}

ElType Front (Queue Q) {
    ElType front=Q.Tab[Q.HEAD];
    return front;
}