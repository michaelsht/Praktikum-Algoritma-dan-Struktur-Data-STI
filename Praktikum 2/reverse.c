#include <stdio.h>

int main() {
    int num, reverse;

    scanf("%d", &num);
    reverse = 0;
    while (num > 0) {
        reverse += num % 10;
        reverse *= 10;
        num /= 10;
    }
    printf("%d\n", reverse/10);
    return 0;
}