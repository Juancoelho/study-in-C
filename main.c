#include  <stdio.h>

int main (){
   
    int num, num2, res;

    printf("digite uma numero: ");
    scanf("%d", &num);

    printf("digite outro numero");
    scanf("%d", &num2);

    res = num + num2;

    printf("o valor entre %d e %d é %d", num, num2, res);

    return 0; 

}