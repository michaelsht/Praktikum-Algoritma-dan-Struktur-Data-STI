/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 08 September 2022
Topik 		: Pengenalan
Deskripsi	: Strong Number
*/
#include <stdio.h> 
int faktorial (int r)  {  
    int mulai=1;  
    for(int i=1;i<=r;i++)  {  
        mulai *= i;  
    }  
    return mulai;  
}  
 
int main()  {  
    int bilangan;  
    int jumlah = 0;  
    scanf("%d",&bilangan);  
    int k = bilangan;  
    int r ;  
    while(k != 0)  {  
        r = k%10;  
        int f = faktorial (r);  
        k=k/10;  
        jumlah += f ;  
    }  
    if(jumlah == bilangan)  {  
        printf("Y\n");  
    }  
    else  {  
        printf("N\n");  
    }  
    return 0;  
}  