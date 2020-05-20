#include <stdio.h>

int bf_match(const char txt[], const char pat[]){
    int pt =0;
    int pp =0;
    while(txt[pt] != '\0' && pat[pp]!= '\0'){
        if (txt[pt]==pat[pp]){
            pt++;
            pp++;
        }
        else{
            pt= pt-pp+1;
            pp=0;
        }
    }
    if(pat[pp]=='\0')
        return pt-pp;
    return -1;
}

int bf_matchr(const char txt[], const char pat[]){

    int pat_len =strlen(txt);
    int txt_len =strlen(pat);
    int pt = txt_len - pat_len;
    int pp;

    while(pp!=0 && pt!=0){
        int pp=0;
        if (txt[pt]==pat[pp]){
            if (pp == pat_len - 1)
        		return pt - pp;
            pt++;
            pp++;
        }
        pt = pt-pp-1;
    }
    return -1;
}

int main(void){
    int idx;
    char s1[256];
    char s2[256];

    printf("Brute-force method.\n");
    printf("text: ");
    scanf("%s", s1);
    printf("pattern: ");
    scanf("%s", s2);

    idx = bf_match(s1,s2);
    if (idx==-1)
        printf("no match");
    else
        printf("match from %d", idx+1);

    printf("\n\n");

    idx = bf_matchr(s1,s2);
    if (idx==-1)
        printf ("no match");
    else
        printf("match from %d", idx);

    return 0;
    
}