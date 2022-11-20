/*
Nama    : Michael Sihotang
NIM     : 18221054
Pra Praktikum 09 Problem 02
*/

# include <stdio.h>
# include <stdlib.h>
# include "listlinier.h"

int main(){
	infotype input;
    List LIST, Inverted;

    CreateEmpty(&LIST);

    scanf("%d",&input);

    if (input>100||input<0) {
        printf("Daftar nilai kosong\n");
    }    
    else{
        while(input<=100&&input>=0){
            InsVFirst(&LIST,input);
            scanf("%d",&input);
        }
        Inverted = LIST;
        printf("%d\n",NbElmt(LIST));
        printf("%d\n",Max(LIST));
        printf("%d\n",Min(LIST));
        printf("%.2f\n",Average(LIST));
        InversList(&LIST);
        PrintInfo(LIST);
        printf("\n");
        InversList(&LIST);
        PrintInfo(LIST);
        printf("\n");
    }
    return 0;
}