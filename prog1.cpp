#include <iostream>
#include "stdio.h"
int main() {
    int a, b;
    int *p1, *p2;
    printf("Vvedite a=");
    scanf("%d",&a);
    printf("Vvedite b=");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("a=");
    printf("%d",*p1);
    printf(" b=");
    printf("%d",*p2);
    return 0;
}