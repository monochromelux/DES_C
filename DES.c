#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void) {
    int select = 0;

    printf("--------------------\n");
    printf("��ȣȭ: 1, ��ȣȭ: 2\n");
    printf("--------------------\n");
    scanf("%d", &select);
    if (select == 1) {

    }
    else if(select == 2) {

    }
    else {
        printf("error: �߸��� �Է��Դϴ�. ���α׷��� �����մϴ�.\n");
        //system("pause");
        return -1;
    }
    return 0;
}