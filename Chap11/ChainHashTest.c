#include <stdio.h>
#include "Member.h"
#include "ChainHash.h"

typedef enum{
    TERMINATE, ADD, DELETE, SEARCH, CLEAR, DUMP
}Menu;

Menu SelectMenu(void){
    int ch;
    do{
        printf("1:추가 2:삭제 3:검색 4:모두 삭제 5: 덤프 0:종료");
        scanf("%d", &ch);
    }while(ch<TERMINATE || ch>DUMP);
    return (Menu)ch;
}

int main (void){
    Menu menu;
    ChainHash hash;
    do{
        int result;
        Member x;
        Node * temp;
        switch (menu = SelectMenu())    
        {
        case ADD:
            x = ScanMember("삽입", MEMBER_NO | MEMBER_NAME);
            result = Add(&hash, &x);
            if(result)
                printf("\a error: 추가에 실패했습니다.(%s).\n", (result ==1)?"이미 등록됨":"메모리 부족");
            break;

        case DELETE:
            x = ScanMember("삭제", MEMBER_NO);
            result = Remove(&hash, &x);
            if (result ==1)
                printf("\aerror: 데이터가 존재하지 않습니다.");
            break;

        case SEARCH:
            x = ScanMember("검색", MEMBER_NO);
            temp = Search(&hash, &x);
            if (temp == NULL)
                printf("\a 검색 실패");
            else
                PrintLnMember(&temp->data);
            break;

        case CLEAR:
            Clear(&hash);
            break;
        
        case DUMP:
            Dump(&hash);
            break;
        }
    }while (menu != TERMINATE);

    Terminate(&hash);
    return 0;
}