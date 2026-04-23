#include <stdio.h>

int main() 
{
    int n, a[50], even[50], odd[50];
    int e=0, o=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++) {
        if(a[i]%2==0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }

    printf("Even: ");
    for(int i=0;i<e;i++) printf("%d ", even[i]);

    printf("\nOdd: ");
    for(int i=0;i<o;i++) printf("%d ", odd[i]);

    return 0;
}
