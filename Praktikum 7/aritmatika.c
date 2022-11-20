// Michael Sihotang
// 18221054

#include <stdio.h>
#include "aritmatika.h"

boolean isOperator(char input) {
    return (input == '+' || input == '-' || input == '*' || input == '/');
}

int hitung(int angka1, int angka2, char op) {
    if (op == '+') {
        return angka1 + angka2;
    } 
    else if (op == '-') {
        return angka1 - angka2;
    } 
    else if (op == '*') {
        return angka1 * angka2;
    } 
    else if (op == '/') {
        return angka1 / angka2;
    }
}

int eval(char *input, int length) {
    Stack S;
    int i, num1, num2, result;
    char op;
    CreateEmpty(&S);
    for (i = 0; i < length; i++) {
        if (!isOperator(input[i])) {
            Push(&S, input[i] - '0');
        } 
        else {
            Pop(&S, &num2);
            Pop(&S, &num1);
            result = hitung(num1, num2, input[i]);
            Push(&S, result);
        }
    }
    Pop(&S, &result);
    return result;
}