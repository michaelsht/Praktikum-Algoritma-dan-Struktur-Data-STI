/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 08 September 2022
Topik 		: Pengenalan
Deskripsi	: Bilangan
*/

#include <stdio.h>

int main() {
    int bilangan ;
    scanf ("%d", &bilangan) ;
    if (bilangan == 2) {
        printf("Tidak\n") ;
    }
    else if (bilangan % 2 == 0) {
        printf("Ya\n") ;
    }
    else {
        printf("Tidak\n") ;
    }

    return 0 ;
}