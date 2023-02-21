#include<stdio.h>
int main(void){
    int a;
    int b;
    a = 2;
    b = 3;
    // %d - decimal: 10진수(숫자) a가 %d에 들어간다.
    printf("a에 입력값 %d이다.\n", a);

    // %d에는 뒤의 변수가 앞에서부터 차례대로 들어간다.
    printf("a는 %d, b는 %d, a+b = %d\n", a, b, a+b);
    /* code */
    return 0;
}
