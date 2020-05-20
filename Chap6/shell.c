#include<stdio.h>
#include <stdlib.h>

void shell (int a[], int n){
    int h,j;
    for (h=1; h<n/9; h = h*3+1)
        ;
    for (; h>0; h/=3){
        for (int i = h; i<n; i++){
            int tmp = a[i];
            for (j = i-h; j>=0 && a[j]>tmp; j-=h)
                a[j+h] = a[j];
            a[j+h] = tmp;
        }
    }
}

int main (void){
    int nx;
    int *x;
    
    puts("shell sort");
    printf("number of elements:");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (int i =0; i<nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    shell(x, nx);

    puts("finish sorting");
    for (int i =0; i<nx; i++)
        printf ("x[%d] : %d\n", i, x[i]);
        
    free(x);
    return 0;
}