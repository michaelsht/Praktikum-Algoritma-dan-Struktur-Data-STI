# include <stdio.h>
# include "panjangstring.h"

int panjangString(char*kata) {
    int i ;
    i = 0 ;
    while (*(kata + i) != '\0') {
        i += 1 ;
    }
    return i ; 
}