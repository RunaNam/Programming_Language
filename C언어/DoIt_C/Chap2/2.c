#include <stdio.h>

int card_convr(unsigned x, int n, char d[]){
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    if (x ==0) 
        d[digits++] = dchar[0];
    else
    {
        while(x){
            d[digits++] = dchar[x % n];
            x/=n;
        }
    }
    return digits;
    
}

int main (void){
    unsigned no;
    int cd;
    int dno;
    int retry;
    char cno[512];

    printf("Base conversion program.\n");
    do{    
        printf("input number > ");
        scanf("%u", &no);
        do{
            printf("what type to change? (2-36) > ");
            scanf("%d", &cd);
        } while(cd <2 || cd>36);
        dno = card_convr(no, cd, cno);
        printf("%d -> ", cd);
        for (int i=dno-1; i>=0; i--){
            printf("%c", cno[i]);
        }
        printf("\nretry? (1- yes/ 2- no) > ");
        scanf("%d", &retry);
    } while(retry ==1);
    return 0;

}