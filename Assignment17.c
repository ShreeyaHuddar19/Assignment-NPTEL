#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i, j, fact;
    float x, sum = 0;
    int sign = 1;

    printf("Enter x and number of terms: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= n; i++) 
{
        fact = 1;

        for(j = 1; j <= 2*i-1; j++)
            fact *= j;

        sum += sign * pow(x, 2*i-1) / fact;
        sign = -sign;
    }

    printf("Sum = %.2f", sum);

    return 0;
}
