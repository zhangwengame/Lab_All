#include <stdio.h>
double fun(int n, double x)
{
       if (n==0) return 1;
       else return fun(n-1,x)*x;
}
int main(void)
{
	int n;
	double x, root; 

    	scanf("%lf%d", &x,&n);
  	root = fun(n, x);
 	printf("Root = %0.2f\n", root);
}  
