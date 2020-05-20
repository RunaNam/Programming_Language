#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do {type tmp = x; x = y; y = tmp;} while(0)

void partition(int a[], int n){
    int i;
    int pl = 0;
    int pr = n-1;
    int x = a[n/2];
    do{
        while (a[pl]<x) pl++;
        while (a[pr]>x) pr--;
        if (pl <= pr){
            swap (int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    }while (pl<= pr);

    printf("pivot: %d\n", x);

    printf("pivot or lower group\n");
    for (i=0; i<pl; i++)
        printf("%d ", a[i]);
    printf("\n");

    if (pl > pr+1){
        printf("pivot group\n");
        for (i= pr+1; i<pl; i++)
            printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("pivot or higher group\n");
    for (i=pr+1; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main (void){
    int nx;
    int *x;
    
    puts("split array\n");
    printf("number of elements:");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (int i =0; i<nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    partition (x, nx);
    free(x);
    return 0;
}