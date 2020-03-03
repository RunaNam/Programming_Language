#include <stdio.h>

int main (void){
    int w, h, i, j;
    int t;
    printf("print square\n");
    printf("width: ");
    scanf("%d", &w);
    printf("hegiht: ");
    scanf("%d", &h);

    for (i = 0; i<h; i++)
    {
        for (j = 0; j<w; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("print triangle\n");
    printf("input number: ");
    scanf("%d", &t);

    for (i = 0; i<t; i++)
    {
        for (j = t-i; j>0; j--){
            printf(" ");
        }

        for (j = 0; j<(i*2)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}