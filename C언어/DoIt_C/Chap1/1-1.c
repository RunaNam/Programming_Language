#include <stdio.h>

int sumof(int a, int b){
    int sum = 0;
    if (a>b){
        for (a; a<=b; a++){
            sum += a;
        }
    }
    else{
        for (b; b<=a; b++){
            sum += b;
        }
    }
    return sum;
}

int main (void){
    int a, b;
    puts("sum of a to b");
    printf("a, b: ");
    scanf("%d %d", &a, &b);

    printf("%d",sumof(a,b));    
    return 0;
}