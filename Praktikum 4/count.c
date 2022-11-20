// Nama     : Michael Sihotang
// NIM      : 18221054

#include <stdio.h>

int main() 
{
    int N;
    int q;
    int i;
    int sum;
    int j;
    scanf("%d", &N);
    int arr[N];
    for (i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    int l[q];
    int r[q];
    for (i=0; i<q; i++) {
        scanf("%d %d", &l[i], &r[i]);
    }
    for (i=0; i<q; i++) {
        sum = 0;
        for (j = l[i]-1; j < r[i]; j++) {
            sum = sum + arr[j%N];
        }
        printf("%d\n", sum);
    }
    return 0;
}