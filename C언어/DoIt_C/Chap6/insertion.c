#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n){
    int j;
    for (int i =1; i<n+1; i++){
        int tmp = a[i];
        j = i;
        while (a[j-1]>tmp)
        {
            a[j] = a[j-1];
            j--;
            if (j==0) break;
        }

        for (int z=1; z<n+1; z++){
            if (i==z) printf("* ");
            else if (j==z) printf ("+ ");
            else printf(" ");
        }
        a[j] = tmp;
        
        printf("\n");
        for (int z=1; z<n+1; z++)
            printf("%d ", a[z]);

        printf("\n");

        // for (j = i; j>0 && a[j-1]>tmp ; j--){
        //     a[j] = a[j-1];
        // }

    }
}

int main (void){
    int nx;
    int *x; 
    puts("straight insertion sort \n");

    printf("number of elements: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    x[0] = 0;
    for (int i =1; i<nx+1; i++){
        printf("x[%d] : ",i);
        scanf("%d", &x[i]);
    }

    insertion(x,nx);
    
    puts("finish sorting");
    for (int i =1; i<nx+1; i++)
        printf("x[%d]: %d\n", i, x[i]);
    
    free(x);

    return 0;
}