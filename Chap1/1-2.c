#include <stdio.h>

int main (void){
    int w, h, i, j;
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

}