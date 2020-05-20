#include <stdio.h>
#include<stdlib.h>
#include "IntSet.h"


int Initialize(IntSet *s, int max){
    s->num =0;

    if((s->set = calloc(max, sizeof(int)))==NULL){
        s->max =0;
        return -1;
    }
    s->max = max;
    return 0;
}

int IsMember(const IntSet *s, int n){
    for(int i =0; i<s->num; i++){
        if (s->set[i]==n){
            return i;
        }
    }
    return -1;
}

void Add(IntSet *s, int n){
    if(s->num <s->max && IsMember(s, n)==-1)
        s->set[s->num + 1]= n;
}

void Remove(IntSet *s, int n){
    int idx;
    if((idx = IsMember(s,n))!= -1)
        s->set[idx] = s->set[--s->num];
}

int Capacity(const IntSet *s){
    return s->max;
}

int Size(const IntSet *s){
    return s->num;
}

void Assign(IntSet *s1, const IntSet *s2){
    int i;
    int n = (s1->max < s2->num) ? s1->max : s2->num;
    for (int i=0; i<n; i++){
        s1->set[i] = s2->set[i];
    }
    s1->num = s2->num;
}

int Equal (const IntSet *s1, const IntSet *s2){
    if (Size(s1)!= Size(s2))
        return 0;
    else{
        for (int i =0; i<s1->num; i++){
            for (int j=0; j<s2->num;j++){
                if (s1->set[i]== s2->set[j])
                    break;
                if(j==s2->num)
                    return 0;
            }
        }
    }
    return 1;
}

IntSet *Union (IntSet *s1, const IntSet *s2, const IntSet *s3){
    Assign(s1,s2);
    for (int i=0; i<s3->num; i++)
        Add(s1, s3->set[i]);
    return s1;
}

IntSet *Intersection (IntSet *s1, const IntSet *s2, const IntSet *s3){
    s1->num =0;
    for (int i=0; i<s3->num; i++){
        for(int j=0; j<s2->num; j++){
            if (s2->set[j]==s3->set[i])
                Add(s1, s2->set[j]);
        }
    }
    return s1;
}

IntSet *Difference (IntSet *s1, const IntSet *s2, const IntSet *s3){
    s1->num =0;
    int j;
    for (int i=0; i<s3->num; i++){
        for(j=0; j<s2->num; j++){
            if (s2->set[j]==s3->set[i])
                break;
        }
        if(j==s2->num)
            Add(s1,s3->set[i]);
    }
    return s1;
}

void Print (const IntSet *s){
    printf("{");
    for (int i=0; i<s->num; i++)
        printf("%d ",s->set[i]);
    printf("}");
}

void Println(const IntSet *s){
    print(s);
    printf("\n");
}

void Terminate(IntSet *s){
    if(s->set!= NULL){
        free(s->set);
        s->max = s->num =0;
    }
}

