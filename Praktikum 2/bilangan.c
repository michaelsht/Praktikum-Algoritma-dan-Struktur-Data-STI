/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 25 September 2022
Topik 		: Pengenalan
Deskripsi	: Bilangan
*/

#include <stdio.h>

int main() {
    int N, M, total, i, j, digits;

    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        scanf("%d", &M);
        total = 0;
        for (j = 1; j <= M; j++) {
            digits = j;
            if (j % 7 == 0) {
                total += j;
            }
            else {
                while (digits > 0) {
                    if (digits % 10 == 7) {
                        total += j;
                        break;
                    }
                    digits /= 10;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}