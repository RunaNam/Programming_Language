#include<stdio.h>
#include <string.h>
#include <limits.h>

int bm_match(const char txt[], const char pat[]){
    int pt, pp;
    int pat_len =strlen(txt);
    int txt_len =strlen(pat);
    int skip[UCHAR_MAX +1];
    for (pt =0; pt<=UCHAR_MAX; pt++)
        skip[pt] = pat_len;
    for (pt =0; pt<=UCHAR_MAX; pt++)
        skip[pt] = pat_len - pt -1;
    
    while(pt<txt_len){
        pp=pat_len-1;
        while (txt[pt]==pat[pp]){
            if (pp==0)
                return pt;
            pp--;
            pt--;
        }
        pt+= (skip[txt[pt]]>pat_len-pp)? skip[txt[pp]]:pat_len -pp;
    }
    return -1;
}
int main(void){
    int idx;
    char s1[256];
    char s2[256];

    printf("KMP method.\n");
    printf("text: ");
    scanf("%s", s1);
    printf("pattern: ");
    scanf("%s", s2);

    idx = bm_match(s1,s2);
    if (idx==-1)
        printf("no match");
    else
        printf("match from %d", idx+1);


    return 0;
    
}