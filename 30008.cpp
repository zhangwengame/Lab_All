#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double rate, salary, tax;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &salary);
/*---------*/
        if (salary>5850)  tax=(salary-850)*0.2;
        else if (salary>2850)  tax=(salary-850)*0.15;
        else if (salary>1350)  tax=(salary-850)*0.1; 
        else if (salary>850)  tax=(salary-850)*0.05;
        printf("tax = %0.2f\n", tax);
    }
}
