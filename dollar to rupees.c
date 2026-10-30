#include <stdio.h>
int main()
{
    int a;

    printf("Enter value in dollars: ");
    scanf("%d", &a);

    if(a>=0)
    {
        printf("Value in rupees: %f", a*95.03);
    }
    else
    {
        printf("Please enter a valid value");
    }
    return 0;
}
