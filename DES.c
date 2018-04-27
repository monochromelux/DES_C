#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void) {
    int select = 0;

    printf("--------------------\n");
    printf("암호화: 1, 복호화: 2\n");
    printf("--------------------\n");
    scanf("%d", &select);
    if (select == 1) {

    }
    else if(select == 2) {

    }
    else {
        printf("error: 잘못된 입력입니다. 프로그램을 종료합니다.\n");
        //system("pause");
        return -1;
    }
    return 0;
}