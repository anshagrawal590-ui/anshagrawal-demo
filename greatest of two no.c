#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("A is greater than B");
    }
    else if(b>a)
    {
        printf("B is greater than A");
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}
