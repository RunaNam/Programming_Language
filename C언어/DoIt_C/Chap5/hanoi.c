#include<stdio.h>

void move (int n, int x, int y){
    if (n>1)
        move (n-1, x, 6-x-y);
    printf("%d: %d-> %d\n", n, x, y);
    if (n>1)
        move(n-1, 6-x-y, y);
}


int main (void){
    int n;
    printf("Hanoi tower\n");
    printf("number of towers: ");
    scanf("%d", &n);
    move(n, 1, 3);

    return 0;
}