#include <stdio.h>
#include <string.h>

int main() {
    char kata1[100];
    char kata2[100];
    int nilai ;
    scanf("%s", &kata1);
    scanf("%s", &kata2);

    if(strlen(kata1)==strlen(kata2)){
        if(strcasecmp(kata1, kata2) == 0){
            printf("Ya\n");
            return 0;
        }else{
            printf("Tidak\n");
            return 0;
        }
        return 0;
    }else{
        printf("Tidak\n");
        return 0;
    }
}