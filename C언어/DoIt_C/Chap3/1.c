#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key)
{
    a[n] = key;
    int i = 0;
    while (1)
    {
        if (a[i] == key)
            break;
        i++;
    }
    return i == n ? -1 : i;
}

int main(void)
{
    int num, key;
    int *a;
    printf("Linear search \n");
    printf("number of elements: ");
    scanf("%d", &num);
    a = calloc(num, sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("search : ");
    scanf("%d", &key);
    printf("%d is in x[%d].", key, search(a, num, key));
}