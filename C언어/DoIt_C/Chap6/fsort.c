#include <stdio.h>
#include <stdlib.h>

void fsort(int a[], int n, int max){
    int i;
    int *f = calloc (max+1, sizeof(int));
    int *b = calloc (n, sizeof(int));

    for(i=0; i<= max; i++) f[i] = 0;
    for(i=0; i<n; i++) f[a[i]]++;
    for(i=1; i<=max; i++) f[i] += f[i-1];
    for(i=n-1; i>=0; i--) b[--f[a[i]]]= a[i];
    for(i=0; i<n; i++) a[i] = b[i];

    free(b);
    free(f);
}

int main (void){
    int nx;
    int *x;
    const int max = 100;
    puts("heapsort \n");

    printf("number of elements: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("input integer between 0 to 100\n");
    for (int i =0; i<nx; i++){
        printf("x[%d] : ",i);
        scanf("%d", &x[i]);
    }

    fsort(x,nx, max);
    
    puts("finish sorting");
    for (int i =0; i<nx; i++)
        printf("x[%d]: %d\n", i, x[i]);
    
    free(x);

    return 0;
}