// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "hitungfrekuensi.h"

char currentChar;
boolean EOP;

int hitungfrekuensi() {
    int count;
    char kataTiga[] = "TtIiGgAa";
    count = 0;
    START();
    if (GetCC()==kataTiga[0] || GetCC()==kataTiga[1]) {
        ADV();
        if (GetCC()==kataTiga[2] || GetCC()==kataTiga[3]) {
            ADV();
            if (GetCC()==kataTiga[4] || GetCC()==kataTiga[5]) {
                ADV();
                if (GetCC()==kataTiga[6] || GetCC()==kataTiga[7]) {
                    count = count+1;
                    ADV();
                } else {
                    ADV();
                }
            } else {
                ADV();
            }
        } else {
        ADV();
        }
    } else {
        ADV();
    }
    while (!IsEOP()) {
        if (GetCC()==kataTiga[0] || GetCC()==kataTiga[1]) {
            ADV();
            if (GetCC()==kataTiga[2] || GetCC()==kataTiga[3]) {
                ADV();
                if (GetCC()==kataTiga[4] || GetCC()==kataTiga[5]) {
                    ADV();
                    if (GetCC()==kataTiga[6] || GetCC()==kataTiga[7]) {
                        count = count+1;
                        ADV();
                    } else {
                        ADV();
                    }
                } else {
                    ADV();
                }
            } else {
                ADV();
            }
        } else {
            ADV();
        }
    }
    return(count);
}