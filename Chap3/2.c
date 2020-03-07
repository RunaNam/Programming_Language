#include <stdio.h>
#include <stdlib.h>

int bin_search(int a[], int n, int key)
{
    int pl = 0;
    int pr = n - 1;
    int pc;
    do
    {
        pc = (pl + pr) / 2;
        if (a[pc] == key){
            while(a[pc-1]==key){
                pc--;
            }
            return pc;
        }
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while (pl <= pr);
    return -1;
}

int main(void)
{
    int num, key;
    int *a;
    printf("Binary search \n");
    printf("number of elements: ");
    scanf("%d", &num);
    a = calloc(num, sizeof(int));
    printf("a[0] : ");
    scanf("%d", &a[0]);
    for (int i = 1; i < num; i++)
    {
        do
        {
            printf("a[%d] : ", i);
            scanf("%d", &a[i]);
        } while (a[i] < a[i - 1]);
    }
    printf("search : ");
    scanf("%d", &key);

    int idx = bin_search(a, num, key);
    if (idx == -1)
        printf("cannot search");
    else
    {
        printf("%d is in x[%d].", key, bin_search(a, num, key));
    }
    free(a);
    return 0;
}