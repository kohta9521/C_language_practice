#include <stdio.h>

int main(void) {
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("変数a : "); scanf("%d", &a);
    printf("変数b : "); scanf("%d", &b);

    puts("等価の式");
    printf("a == b の値 : %d\n, a == b");
    printf("a != b の値 : %d\n, a != b");


    puts("関係式の値");
    printf("a < b の値 : %d\n, a < b");
    printf("a <= b の値 : %d\n, a <= b");
    printf("a > b の値 : %d\n, a > b");
    printf("a >= b の値 : %d\n, a >= b");


    return 0;
}