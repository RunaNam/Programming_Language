#include <stdio.h>

int gcd(int x, int y){
    if(y==0)
        return x;
    else return gcd(y, x%y);
}

int gcd_array(const int a[], int n){
    if (n <= 1)
        return a[0];
    int result = gcd(a[0], a[1]);
    for (int i = 2; i<n; i++){
        if(result ==1)
            break;
        gcd (result, a[i]);
    }
    return result;
}

int main (void){
    int x,y, num;
    int* a;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("gcd : %d\n\n", gcd(x,y));

    printf("num: ");
    scanf("%d", &num);
    a = calloc(num, sizeof(int));
    for (int i= 0; i<num; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("gcd: %d", gcd_array(a, num));

    free(a);
    return 0;
}