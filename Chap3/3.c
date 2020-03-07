#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int *a, const int *b)
{
    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else
    {
        return 0;
    }
}

int main(void)
{
    int num, key;
    int *a;
    int *p;
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

    p = bsearch(&key, a, num, sizeof(int), (int (*)(const void *, const void *))int_cmp);

    if (p == NULL)
        printf("cannot search");
    else
    {
        printf("%d is in x[%d].", key, (int)(p - a));
    }
    free(a);
    return 0;
}