#include <stdio.h>
#include "listlinier.h"
#include "boolean.h"

boolean hit (List L, infotype X){
    address find = Nil;
    address listpointer = First(L);
    boolean found= false;
    if (!IsEmpty(L)){
        while ((listpointer!=Nil) && !found){
            if (Info(listpointer)==X){
                found=true;
                find=listpointer;
            }
            else{
                listpointer=Next(listpointer);
            }
        }
    }
    return found;
}

int main()
{
    int N, Q, X;
    List L;
    CreateEmpty(&L);
    scanf("%d", &N);
    scanf("%d", &Q);
    for (int i=0; i<N;i++){
        InsVLast(&L,i+1);
    }
    for (int i=0; i<Q;i++){
        scanf("%d",&X);
        if (hit(L,X)){
            DelP(&L,X);
            InsVFirst(&L,X);
            printf("hit ");
            PrintInfo(L);
        }
        else{
            infotype val;
            DelVLast(&L,&val);
            InsVFirst(&L,X);
            printf("miss ");
            PrintInfo(L);
        }
        printf("\n");
    }
    return 0;
}