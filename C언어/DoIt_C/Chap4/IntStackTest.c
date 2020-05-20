#include <stdio.h>
#include "IntStack.h"

int main (void){
    IntStack s;
    if (Initialize (&s, 64)==-1){
        printf("error.");
        return 1;
        }
    while (1){
        int menu, x;
        printf("data : %d / %d", Size(&s),Capacity(&s));
        printf("1: push | 2: pop | 3: peek | 4: print | 0: exit");
        scanf("%d", &menu);

        if(menu == 0)
            break;
        switch (menu)
        {
        case 1:
            printf("data: ");
            scanf("%d", x);
            if(Push(&s, x)==-1){
                printf("error");
            }
            break;

        case 2:
            if(Pop(&s, &x)==-1)
                printf("error");
            else
            {
                printf("Pop data: %d", x);
            }
            break;
                  
        case 3:
            if(Peek(&s, &x)==-1)
                printf("error");
            else
            {
                printf("Peak data: %d", x);
            }
            break;
        case 4:
            Print(&s);
            break;
        }
    }
    Terminate(&s);
    return 0;
}