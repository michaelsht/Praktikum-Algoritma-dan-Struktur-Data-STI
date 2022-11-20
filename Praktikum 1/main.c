#include<stdio.h>

int main() {
    int waktu, jam, menit, detik ;
    scanf("%d", &waktu) ;
    jam = (waktu/3600) ;
    menit = (waktu%3600) / 60 ; 
    detik = (waktu%3600) % 60 ;
    printf("%d detik = %d jam %d menit %d detik\n", waktu, jam, menit, detik) ;

    return 0 ;
}