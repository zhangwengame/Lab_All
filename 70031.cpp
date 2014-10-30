#include <stdio.h> 
int main(void)
{
    int i, j, temp,len;
    char str[80],tmp;		

    i = 0;
    while((str[i] = getchar( )) != '\n') 
        i++; 
    str[i] = 0;
    len=i;
/*---------*/    
    for (i=0;i<=(len/2)-1;i++)    
    {
        tmp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=tmp;
    } 
    for(i = 0; str[i] != 0; i++) 
        putchar(str[i]);
}
