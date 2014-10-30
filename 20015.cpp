#include <stdio.h>
int main(void)
{
    int n, digit1, digit2, digit3,n1;  
  
    n=152;
      n1=n;
    digit3=n%10;
    n/=10;
     digit2=n%10;
    n/=10;
     digit1=n%10;
    n/=10;
/*---------*/
    printf("整数%d的个位数字是%d, 十位数字是%d, 百位数字是%d\n", n1, digit3, digit2, digit1); 
}
