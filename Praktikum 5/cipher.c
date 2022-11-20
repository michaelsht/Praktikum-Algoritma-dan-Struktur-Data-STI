// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "mesinkarakterv2.h"
#include "mesinkata.h"

int main() 
{
    Word tempKata;
    int i;
    STARTWORD();
    int geser;
    geser = currentWord.Length%26;
    for (i=0; i<currentWord.Length; i++) {
        tempKata.TabWord[i] = currentWord.TabWord[i] + geser;
        if(tempKata.TabWord[i]>90) {
            tempKata.TabWord[i] = tempKata.TabWord[i]-26;
        }
        printf("%c", tempKata.TabWord[i]);
    }
    ADVWORD();
    
    while (!isEndWord()) {
        int length;
        printf(" ");
        length = currentWord.Length;
        tempKata.Length = length;
        for (i=0; i<length; i++) {
            tempKata.TabWord[i] = currentWord.TabWord[i] + geser;
            if (tempKata.TabWord[i]>90) {
                tempKata.TabWord[i] = tempKata.TabWord[i]-26;
            }
            printf("%c", tempKata.TabWord[i]);
        }
        ADVWORD();
    }
    printf(".\n");

    return 0;
}