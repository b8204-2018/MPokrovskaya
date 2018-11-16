#include <iostream>
#include "stdio.h"
int main() {
    int n,i,sum=0;
    printf("Vvedite chislo:");
    scanf("%d",&n);
    int *p= new int ;
    for (i=0; i<=n-1; i++)
    {printf("Vvedite element massiva:");
    scanf("%d",&p[i]);
    sum=sum+*(p+i);
    }
    printf("Summa elementov massiva=");
    printf("%d",sum);
    return 0;
}