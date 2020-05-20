#include <stdio.h>
#include "IntQueue.h"

int main (void){
    IntQueue q;
    if (Initialize (&q, 64)==-1){
        printf("error.");
        return 1;
        }
    while (1){
        int menu, x;
        printf("data : %d / %d", Size(&q),Capacity(&q));
        printf("1: enque | 2: deque | 3: peek | 4: print | 0: exit");
        scanf("%d", &menu);

        if(menu == 0)
            break;
        switch (menu)
        {
        case 1:
            printf("data: ");
            scanf("%d", x);
            if(Enque(&q, x)==-1){
                printf("error");
            }
            break;

        case 2:
            if(Deque(&q, &x)==-1)
                printf("error");
            else
            {
                printf("Pop data: %d", x);
            }
            break;
                  
        case 3:
            if(Peek(&q, &x)==-1)
                printf("error");
            else
            {
                printf("Peak data: %d", x);
            }
            break;
        case 4:
            Print(&q);
            break;
        }
    }
    Terminate(&q);
    return 0;
}