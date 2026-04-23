#include <stdio.h>

int main() 
{
    int a,b;
    int i,gcd;

    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);

  
    for(i=2;i<=a;i++) 
    {
        if(a%i==0) 
        {
            printf("Smallest divisor of %d = %d\n", a, i);
            break;
        }
    }

    for(i=1;i<=a && i<=b;i++) 
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("GCD = %d\n", gcd);

    return 0;
}
