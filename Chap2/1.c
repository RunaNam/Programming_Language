#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x=y; y=t;} while(0)

int maxof(const int a[], int n){
    int max = a[0];
    for (int i=1; i<n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int minof(const int a[], int n){
    int min = a[0];
    for (int i=1; i<n; i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    return min;
}

void position_change(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i]> a[j]){
                swap(int, a[i], a[j]);
            }
        }
    }
}

int main (void){
    int number=0;
    int* height;
    printf("number of people: ");
    scanf("%d",&number);
    height = calloc (number, sizeof(int));
    printf("input height of %d people\n", number);
    for(int i=0; i<number; i++){
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("highest: %d", maxof(height, number));
    printf("smallest: %d", minof(height, number));

    printf("\n\nreposition \n");
    position_change(height, number);
    for(int i=0; i<number; i++){
        printf("height[%d]: %d \n", i, height[i]);
    }
    free(height);

    return 0;

}