#include <stdio.h>
#include "MinMax.h"

List MinMax(List L) 
{
    ElType min, max;
    IdxType i, idxmax, idxmin;
    min = Get(L,0);
    max = Get(L,0);
    idxmax = 0;
    idxmin = 0;
    for (i=FirstIdx(L); i<Length(L); i++) {
        if (Get(L,i)<min) {
            min = Get(L,i);
            idxmin = i;
        }
    }
    DeleteAt(&L, idxmin);
    InsertLast(&L, min);

    for (i=FirstIdx(L); i<Length(L); i++) {
        if (Get(L,i)>max) {
            max = Get(L,i);
            idxmax = i;
        }
    }
    DeleteAt(&L, idxmax);
    InsertLast(&L, max);
    return L;
}