// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "anagramalstrukdat.h"

int stringLength (char* string) 
{
    int length = 0 ;
    while (string[length] !='\0') {
        length = length+1;
    }
    return length ;
}

Word toKata(char* command) 
{
    int i = 0 ;
    Word ubah;
    for (i; i < stringLength(command); i++) {
        ubah.TabWord[i] = command[i];
    }
    ubah.Length = stringLength(command);
    return ubah ;
}

boolean isAnagram(Word string1, Word string2) 
{
    if (string1.Length != string2.Length) {
        return false;
    } 
    else {
        int arr1[26] = {0};
        int arr2[26] = {0};
        int i;
        i = 0;
        while (string1.TabWord[i]!='\0') {
            arr1[string1.TabWord[i]-'a'] = arr1[string1.TabWord[i]-'a']+1;
            i = i+1;
        }
        i = 0;
        while (string2.TabWord[i]!='\0') {
            arr2[string2.TabWord[i]-'a'] = arr2[string2.TabWord[i]-'a']+1;
            i = i+1;
        }
        for (i=0; i<26; i++) {
            if (arr1[i]!=arr2[i]) {
                return false;
            } else {
                return true;
            }
        }
    }
}

void anagramalstrukdat(int* frek) {
    *frek = 0;
    Word alstrukdat;
    alstrukdat = toKata("alstrukdat");
    STARTWORD();
    while (!isEndWord()) {
        if (isAnagram(alstrukdat, currentWord)) {
            *frek = *frek+1;
        } 
        ADVWORD();
    }
}