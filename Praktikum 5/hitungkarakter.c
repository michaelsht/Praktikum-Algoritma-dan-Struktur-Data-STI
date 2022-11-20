#include<stdio.h>
#include"mesinkarakter.h"

int hitungkarakter (char karakter) {
    START () ;
    int sum ;
    sum = 0 ;
    while (!EOP) {
        if (karakter == GetCC())  {
            sum += 1 ;
        }
        ADV () ;
    }
    return sum ;
}