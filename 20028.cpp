#include <stdio.h>
int main(void)
{
    int digit1, digit2, digit3, digit4, newnum, number,n1;

    scanf("%d", &number);
    n1=number;
    digit1=n1%10;
    digit1=(digit1+9)%10;
    n1/=10;
     digit2=n1%10;
         digit2=(digit2+9)%10;
    n1/=10;
     digit3=n1%10;
         digit3=(digit3+9)%10;
    n1/=10;
     digit4=n1%10;
         digit4=(digit4+9)%10;
    n1/=10;
/*---------*/
    printf("The encrypted number is %d%d%d%d\n", digit2, digit1, digit4, digit3);
}
