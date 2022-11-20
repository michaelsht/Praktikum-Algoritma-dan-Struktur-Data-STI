/* 
NIM 		: 18221054
Nama 		: Michael Sihotang
Tanggal 	: 08 September 2022
Topik 		: Pengenalan
Deskripsi	: Frekuensi
*/

#include <stdio.h>
#include <string.h>

int charToInt(char c){
	int num = 0;
	num = c - '0';
	return num; 
}

int main(){
    char input[10];
    int panjang, i;
    int angka0 = 0;
    int angka1 = 0;
    int angka2 = 0;
    int angka3 = 0;
    int angka4 = 0;
    int angka5 = 0;
    int angka6 = 0;
    int angka7 = 0;
    int angka8 = 0;
    int angka9 = 0;
    scanf("%s", input);
    panjang=strlen(input);
    i=0;
    while (i<=panjang){
        if (charToInt(input[i])==0){
            angka0=angka0 + 1;
        }
        else if (charToInt(input[i])==1){
            angka1=angka1 + 1;
        }
        else if (charToInt(input[i])==2){
            angka2=angka2 + 1;
        }
        else if (charToInt(input[i])==3){
            angka3=angka3 + 1;
        }
        else if (charToInt(input[i])==4){
            angka4=angka4 + 1;
        }
        else if (charToInt(input[i])==5){
            angka5=angka5 + 1;
        }
        else if (charToInt(input[i])==6){
            angka6=angka6 + 1;
        }
        else if (charToInt(input[i])==7){
            angka7=angka7 + 1;
        }
        else if (charToInt(input[i])==8){
            angka8=angka8 + 1;
        }
        else if (charToInt(input[i])==9){
            angka9=angka9 + 1;
        }

        i=i+1;
    }
    
    printf("%d%d%d%d%d%d%d%d%d%d\n",angka0,angka1,angka2,angka3,angka4,angka5,angka6,angka7,angka8,angka9);
    return 0;
}