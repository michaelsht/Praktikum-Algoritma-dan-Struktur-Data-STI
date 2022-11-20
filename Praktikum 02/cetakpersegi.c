/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 08 September 2022
Topik 		: Pengenalan
Deskripsi	: Cetak Persegi
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i=0;
    for (i; i<2*n-1; i++) {
        int j=0;
        for (j; j<2*n-1; j++) {
            if (i%2==0) {
                if (j%2==0) {
                    printf("O");
                } else {
                    printf("X");
                }
            } else {
                if (j%2==0) {
                    printf("X");
                } else {
                    printf("O");
                }                
            }
        } printf("\n");
    } 
    return 0;
}