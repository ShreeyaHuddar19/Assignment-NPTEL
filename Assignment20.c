#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Without pointer: %d %d\n", a,b);
}

void p_swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x=10,y=20;

    swap(x,y);
   

    p_swap(&x,&y);
    printf("With pointer: %d %d\n", x,y);

    return 0;
}
