#include <stdio.h>

void merge(const int a[], int na, const int b[], int nb, int c[]){
    int pa = 0;
    int pb = 0;
    int pc = 0;
    while (pa < na && pb < nb){
        c[pc++] = (a[pa]<b[pb])? a[pa++]: b[pb++];
    }
    while (pa<na)
        c[pc++] = a[pa++];
    while (pa<nb)
        c[pc++] = b[pb++];
}

int main (void){
    int na, nb, i;
    int *a, *b, *c;
    
    puts("mreges sort\n");
    printf("number of elements of a:");
    scanf("%d", &na);
    a = calloc(na, sizeof(int));

    printf("a[0]: ");
    scanf("%d", &a[0]);
    for (i =1; i<na; i++){
        do {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }while(a[i-1]>a[i]);
    }
    printf("\n");

    printf("number of elements of b:");
    scanf("%d", &nb);
    b = calloc(nb, sizeof(int));

    printf("b[0]: ");
    scanf("%d", &b[0]);
    for (i =1; i<nb; i++){
        do {
            printf("b[%d]: ", i);
            scanf("%d", &b[i]);
        }while(b[i-1]>b[i]);
    }
    printf("\n");

    c = calloc(na+nb, sizeof(int));

    merge(a, na, b, nb, c);

    puts("finish sorting");
    for (int i =0; i<na+nb; i++)
        printf ("c[%d] : %d\n", i, c[i]);
    
    free(a); free(b); free(c);
    return 0;
}