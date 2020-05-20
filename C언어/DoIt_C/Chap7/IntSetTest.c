#include <stdio.h>
#include "IntSet.h"

enum{ADD, RMV, SCH};

int scan_data(int sw){
    int data;
    switch (sw)
    {
    case ADD:
        printf("add data: ");
        break;
    case RMV:
        printf("Remove data: ");
        break;
    case SCH:
        printf("search data: ");
        break;
    }
    scanf("%d", &data);
    return data;
}

int main (void){
    IntSet s1, s2, tmp;
    Initialize(&s1, 512);
    Initialize(&s2, 512);
    Initialize(&tmp, 512);

    while (1){
        int m, x, idx;

        printf("s1 = "); Println(&s1);
        printf("s2 = "); Println(&s2);

        printf("1:s1-add 2:s1-rmv 3:s1-sch 4:s1<-s2 5:s2-add 6:s2-rmv 7:s2-sch 8:s2<-s1 0:exit");
        scanf("%d", m);
        if (m==0) break;
        switch (m)
        {
        case 1:
            scan_data(ADD); Add(&s1, x);
            break;
        case 2:
            scan_data(RMV); Remove(&s1, x);
            break;
        case 3:
            scan_data(SCH); idx = IsMember(&s1, x);
            printf("x %s in s1", idx>0 ? "is": "is not");
            break;
        case 4:
            Assign(&s1, &s2);
            break;

        case 5:
            scan_data(ADD); Add(&s2, x);
            break;
        case 6:
            scan_data(RMV); Remove(&s2, x);
            break;
        case 7:
            scan_data(SCH); idx = IsMember(&s2, x);
            printf("x %s in s2", idx>0 ? "is": "is not");
            break;
        case 8:
            Assign(&s2, &s1);
            break;
        }
    }
    Terminate(&s1);
    Terminate(&s2);
    Terminate(&tmp);
    return 0;
}