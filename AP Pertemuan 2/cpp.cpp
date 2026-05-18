#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("cls");
    int a,b,c,d,e;
    printf ("input bil 1");
    scanf ("%d",&a);
    printf ("input bil 2");
    scanf ("%d",&b);

    getchar();
    c= a>=b;
    d= a<<1;
    e= a>b || a==b;

    printf("%d besar sama dengan %d = %d\n",a,b,c);
    printf("%d geser satu bit ke kiri = %d\n",a,d);
    printf("%d > %d atau %d =%d = %d\n",a,b,a,b,e);

    getchar();
}