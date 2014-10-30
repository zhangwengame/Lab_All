#include <stdio.h>
int main(void)
{
    char op;
    int op1, op2, res;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &op1);
        op = getchar();
        while (op!='=')
        {
              scanf("%d",&op2);
              switch (op)
              {
                     case '+':op1=op1+op2;break;
                     case '-':op1=op1-op2;break;
                     case '*':op1=op1*op2;break;
                     case '/':op1=op1/op2;break;
              }
              op = getchar();
        }
/*---------*/
        printf("%d\n", op1);
        getchar();
   }
}
