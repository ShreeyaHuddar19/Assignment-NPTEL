#include <stdio.h>


int factRec(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factRec(n-1);
}


int factIter(int n) {
    int fact = 1;
    for(int i=1;i<=n;i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("Factorial with Recursion: %d\n", factRec(n));
    printf("Factorial without recursion: %d\n", factIter(n));

    return 0;
}
