// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>
#include "stack.h"

int main() {
    Stack S1, S2, result;
    char temp1[100], temp2[100];
    int check;
    infotype temp;

    CreateEmpty(&S1);
    CreateEmpty(&S2);
    CreateEmpty(&result);

    scanf("%s", temp1);
    scanf("%s", temp2);

    convertToStack(&S1, temp1);
    convertToStack(&S2, temp2);
    check = charComparing(temp1, temp2);
    if (check==1) {
        substract(S1, S2, &result);
    } 
    else {
        printf("-");
        substract(S2, S1, &result);
    }
    deleteZero(&result);
    while(!IsEmpty(result)) {
        printf("%d", InfoTop(result));
        Pop(&result, &temp);
    }
    printf("\n");
    return 0;
}

void convertToStack(Stack* S, char* c) {
    char* temp;
    temp = c;
    while (*temp!='\0') {
        Push(S, *temp-'0');
        temp++;
    }
}

int length (char* c) {
    int count;
    char *temp;
    count = 0;
    temp = c;
    while (*temp!='\0') {
        count++;
        temp++;
    }
    return count;
}

void substract(Stack S1, Stack S2, Stack *result) {
    infotype top1, top2, currentTop;
    while (!IsEmpty(S1) || !IsEmpty(S2)) {
        if (!IsEmpty(S2)) {
            Pop(&S1, &top1);
            Pop(&S2, &top2);
            if (top1<top2) {
                top1 = top1+10;
                Pop(&S1, &currentTop);
                currentTop--;
                Push(&S1, currentTop);
            }
            Push(result, top1-top2);
        } 
        else {
            Push(result, InfoTop(S1));
            Pop(&S1, &top1);
        }
    }
}

int charComparing (char* temp1, char* temp2) {
    int length1;
    int length2;
    int i;
    length1 = length(temp1);
    length2 = length(temp2);
    if (length1>length2) {
        return 1;
    } 
    else if (length1<length2) {
        return -1;
    } 
    else {
        for(i=0; i<length1; i++) {
            if (temp1[i]>temp2[i]) {
                return 1;
            } else if (temp1[i]<temp2[i]) {
                return -1;
            }
        }
        return 1;
    }
}

void deleteZero(Stack *S) {
    infotype temp;
    while(!IsEmpty(*S)) {
        if (InfoTop(*S)==0) {
            Pop(S, &temp);
        } 
        else {
            break;
        }
    }
    if (IsEmpty(*S)) {
        Push(S,0);
    }
}