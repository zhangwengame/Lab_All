#include <stdio.h>
/*---------*/
float matrix(float *p[],int n)
{
    float ans;
    int i,j,k;
    ans=0;
    for (i=0;i<n;i++)
      ans=ans+p[i][i];
    for (i=0;i<n;i++)
      ans=ans+p[i][n-i-1];
    ans=ans-p[1][1];
    return ans;
}
int main()
{	
	int i,j; 
	float a[3][3],*p[3];

  	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
			scanf("%f",&a[i][j]);
		}
    for (i=0;i<3;i++) p[i]=a[i];
 	printf("sum=%0.2f \n", matrix(p,3));
}
