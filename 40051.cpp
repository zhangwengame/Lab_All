#include <stdio.h>
int main(void)
{
    int fail, num;               	
    int repeat, ri;
    double grade, total; 	

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf ("%lf", &grade);  
        total=0; num=0; fail=0;
        while (grade>0)
        {
              total+=grade;
              num++;
              if (grade<60) fail++;
              scanf ("%lf", &grade); 
        }    	
/*---------*/
       if(num > 0)
           printf("Grade average is %.2f,the number of fail is %d\n", total/num, fail);
    }
}
