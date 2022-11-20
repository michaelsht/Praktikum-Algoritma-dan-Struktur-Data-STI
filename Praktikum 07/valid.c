// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "valid.h"

Stack validParantheses(char* input, int length) {
    Stack s;
    int i;
    CreateEmpty(&s);
    i = 0;
    while(i < length-1) {
        if (input[i]=='{') {
            if (input[i + 1]=='}') {
                Push(&s, input[i]);
                Push(&s, input[i + 1]);
            }
        } else if (input[i]=='[') {
            if (input[i + 1]==']') {
                Push(&s, input[i]);
                Push(&s, input[i + 1]);
            }
        } else if (input[i]=='(') {
            if (input[i + 1]==')') {
                Push(&s, input[i]);
                Push(&s, input[i + 1]);
            }
        }
        i++;
    }
    return s;
}