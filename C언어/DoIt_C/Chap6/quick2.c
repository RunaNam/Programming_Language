#include<stdio.h>
#include<stdlib.h>

int int_cmp (const int *a, const int *b){
    if (*a < *b)
        return -1;
    else if (*a>*b)
        return 1;
    else
        return 0;
    
}

int main (void){
    int nx;
    int *x;
    
    puts("quick sort");
    printf("number of elements:");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (int i =0; i<nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    qsort(x, nx, sizeof(int), (int(*)(const void *, const void *))int_cmp);
    puts("finish sorting");
    for (int i =0; i<nx; i++)
        printf ("x[%d] : %d\n", i, x[i]);
    
    free(x);
    return 0;
}