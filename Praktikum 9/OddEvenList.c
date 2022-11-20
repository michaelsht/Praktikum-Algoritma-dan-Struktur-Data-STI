/*
Nama    : Michael Sihotang
NIM     : 18221054
Pra Praktikum 09 Problem 03
*/

# include <stdio.h>
# include <stdlib.h>
# include "listlinier.h"

void OddEvenList(List L, List *Odd, List *Even)
    /* Memisahkan elemen ganjil dan genap dari list L kedalam dua list baru secara mengurut membesar*/
    /* I.S: List L TIDAK mungkin kosong dan memiliki nilai lebih dari sama dengan 0(value>=0), List Odd dan Even kosong*/
    /* F.S: List Odd memiliki elemen bernilai ganjil mengurut membesar, List Even memiliki elemen bernilai genap mengurut membesar
            List L TIDAK PERLU DIDEALOKASI*/
    /*Contoh:
        Input:
            L: [0,3,1,4,5]
            Odd: []
            Even: []
        Output:
            L: [0,3,1,4,5]
            Odd: [1,3,5]
            Even: [0,4] */
    /*Note: 
        1. Bilangan 0 merupakan bilangan genap
        2. Buatlah List Odd dan Even terlebih dahulu*/
{
    CreateEmpty(Odd);
    CreateEmpty(Even);

    address P = First(L);

    while (P != Nil) {
        if (Info(P) % 2 == 0) {
            InsVLast(Even, Info(P));
        } else {
            InsVLast(Odd, Info(P));
        }
        P = Next(P);
    }

    address P1 = First(*Odd);
    address P2 = First(*Even);

    while (P1 != Nil) {
        address P3 = Next(P1);
        while (P3 != Nil) {
            if (Info(P1) > Info(P3)) {
                int temp = Info(P1);
                Info(P1) = Info(P3);
                Info(P3) = temp;
            }
            P3 = Next(P3);
        }
        P1 = Next(P1);
    }

    while (P2 != Nil) {
        address P3 = Next(P2);
        while (P3 != Nil) {
            if (Info(P2) > Info(P3)) {
                int temp = Info(P2);
                Info(P2) = Info(P3);
                Info(P3) = temp;
            }
            P3 = Next(P3);
        }
        P2 = Next(P2);
    }
}

/*
int main(){
     List L, Odd, Even;

     CreateEmpty(&L);
     InsVLast(&L, 0);
     InsVLast(&L, 3);
     InsVLast(&L, 1);
     InsVLast(&L, 4);
     InsVLast(&L, 5);
     PrintInfo(L);
    
     OddEvenList(L, &Odd, &Even);
     PrintInfo(L);
    
     PrintInfo(Odd);
    
     PrintInfo(Even);
    
}
*/