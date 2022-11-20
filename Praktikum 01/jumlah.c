/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 04 September 2022
Topik 		: Pengenalan
Deskripsi	: Penjumlahan
*/

#include<stdio.h>

int jumlahdigit (int n) {
    int count = 0 ;
    while (n != 0) {
        n /= 10 ;    
        ++count ;
    }
    return count ;
}

int main() {
    int bilangan, sum;
    scanf ("%d", &bilangan) ;
    sum = 0 ;
    int i = 0 ;
    for (i; i <= (jumlahdigit (bilangan) + 10) ; i++) {
        sum = sum + (bilangan % 10) ;
        bilangan = (bilangan / 10) ;
    }
    printf("%d\n", sum) ;
    return 0 ;
}