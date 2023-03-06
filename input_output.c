// #include<stdio.h>

// int main(void){
//     int num;
//     puts("숫자 입력");
//     // &: ampersand(앰퍼샌드) - 해당 변수의 주소로 들어가라
//     scanf("%d", &num);
//     printf("입력한 숫자:%d", num);
// }

// #include<stdio.h>

// int main(void){
//     char ch1;
//     int num1;
//     puts("첫번째 알파벳 ->");
//     // scanf - 입력을 기다림
//     scanf("%c", &ch1);
//     puts("첫번째 숫자 ->");
//     scanf("%d", &num1);
//     printf("알파벳: %c, 숫자: %d", ch1, num1);    
// }



// #include<stdio.h>
// int main(void){
//     char ch2;
//     char name[10];
//     int age;
//     puts("성별 (남:m , 여:w)");
//     // scanf - 입력을 기다림
//     scanf("%c", &ch2);
//     puts("이름 ->");
//     // 1byte이상 문자 %s
//     scanf("%s", &name);
//     puts("나이 ->");
//     scanf("%d", &age);
//     printf("이름:%s, 성별:%c, 나이:%d", name, ch2, age);    
// }

// #include<stdio.h>
// int main(void){
//     float num1, num2;
//     float ave;
//     char name[10];
//     int age;
//     printf("첫번째 수:");
//     scanf("%f", &num1);    
//     printf("두번째 수:");
//     scanf("%f", &num2);
//     // %.2f = 소수 2자리까지만 보이게
//     printf("두 수 의 합: %.2f \n", num1 + num2);
//     ave = (num1 + num2) /2;
//     printf("두 수 의 평균: %f \n", ave);            
// }

// #include<stdio.h>
// int main(void){
//     int num1, num2, sum;
//     printf("두 수 입력:");
//     scanf("%d%d", &num1, &num2);
//     printf("두 수 합:[%d] \n", num1 + num2); 
//     printf("두 수 차:[%d] \n", num1 - num2);  
//     printf("두 수 곱:[%d] \n", num1 * num2);          
//     printf("두 수 평균:[%f] \n", ((float)num1 + (float)num2) / 2);      
//     printf("두 수 나눠서 몫:[%d] \n", num1 / num2);    
//     printf("두 수 나눠서 나머지:[%d] \n", num1 % num2);    
                               
// }

#include<stdio.h>
int main(void){
    int a = 10;
    int b = 10;
    int c,d;

    c = ++a;
    d = b++;
    // ++a: 현재값에 1을 추가 - 지금부터 사용
    // b++: 현재값은 b로 사용 - 다음부터 1을 추가한 값 사용
    printf("a값에 10을 ++a한 경우: %d \n", c);
    printf("b값에 10을 b++한 경우: %d \n", d);    
                               
}

