#include <stdio.h>
int main()
{
    int a, b, c;
    printf ("enter the number to check: ");
    scanf ("%d %d %d",&a, &b, &c);

    if (a>b && a>c)
    {
        printf ("%d is the biggest number",a);
    }

    if (c>a && c>b)
    {
        printf ("%d is the biggest number",c);
    }

    if (b>a && b>c)
    {
        printf ("%d is the biggest number",b);
    }

    return 0;
}
