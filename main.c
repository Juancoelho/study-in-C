#include  <stdio.h>

int main (){
   
    int num, num2, res;

    printf("type a number: ");
    scanf("%d", &num);

    printf("type another number");
    scanf("%d", &num2);

    res = num + num2;

    printf("the value between %d and %d is %d", num, num2, res);

    return 0; 

} 