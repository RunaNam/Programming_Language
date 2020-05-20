#include<stdio.h>
#include<stdlib.h>

#define swap(type, x, y) do {type tmp = x; x = y; y = tmp;} while(0)

static void downheap(int a[], int left, int right){
    int tmp = a [left];
    int child, parent;

    for (parent = left; parent<(right+1)/2; parent = child){
        int cl = parent *2 +1;
        int cr = cl +1;

        child = (cr <= right && a[cr]>a[cl])? cr: cl;

        if(tmp >= a[child])
            break;

        a[parent] = a[child];
    }
    a[parent] = tmp;
}

void heapsort(int a[], int n){
    int i;
    for (i= (n-1)/2 ; i>=0; i--){
        downheap(a, i , n-1);
    }
    for (i = n-1; i>0; i--){
        swap (int, a[0], a[i]);
        downheap(a,0, i-1);
    }
}

int main (void){
    int nx;
    int *x; 
    puts("heap sort \n");

    printf("number of elements: ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    x[0] = 0;
    for (int i =1; i<nx+1; i++){
        printf("x[%d] : ",i);
        scanf("%d", &x[i]);
    }

    heapsort(x,nx);
    
    puts("finish sorting");
    for (int i =1; i<nx+1; i++)
        printf("x[%d]: %d\n", i, x[i]);
    
    free(x);

    return 0;
}