#include "jumlahkonsonanvokal.h"

void jumlahKonsonanVokal(char*a, int*b, int*c){
    *b = 0; *c=0;
    int i=0;
    while (a[i] != '\0'){
        if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i] <='z')){
            if (a[i]=='a' || a[i]=='A' || a[i]=='i' || a[i] == 'I' || a[i] == 'u' || a[i] == 'U' || a[i]=='e' || a[i] == 'E' || a[i] == 'o' || a[i] == 'O'){
                *c+=1;
            } else {
                *b+=1;
            }
        }
        i+=1;
    }
}