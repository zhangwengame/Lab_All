#include <stdio.h>
int main (void)
{  
    int i, max_index, min_index, n;
    double x;
    struct book{
        char name[50];
        double price;
    }book[10];

    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++){
        gets(book[i].name);
        scanf("%lf", &x);
        getchar();
        book[i].price = x;
    }
/*---------*/
    max_index=1;
    for (i=0;i<n;i++)
    if (book[max_index].price<book[i].price) max_index=i;
    min_index=1;
    for (i=0;i<n;i++)
    if (book[min_index].price>book[i].price) min_index=i;
    printf("highest price: %.1f, %s\n", book[max_index].price, book[max_index].name);
    printf("lowest price: %.1f, %s\n", book[min_index].price, book[min_index].name);
}
