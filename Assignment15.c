#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    printf("Random numbers:\n");
    for(int i=0;i<5;i++)
        printf("%d\n", rand());

    return 0;
}
