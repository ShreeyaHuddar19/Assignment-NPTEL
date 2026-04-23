#include <stdio.h>
#include <string.h>

struct Employee 
{
    char name[50], desg[50], gen;
    float sal;
};

int main() 
{
    struct Employee e[2];
    int male=0,female=0;

    for(int i=0;i<2;i++) 
    {
        scanf("%s", e[i].name);
        scanf("%s",e[i].desg);
        scanf("%c",&e[i].gen);
        scanf("%f",&e[i].sal);
    }

    for(int i=0;i<2;i++) 
    {
        if(e[i].gen=='M') 
        male++;
        else 
        female++;

        if(e[i].sal>10000)
            printf("%s earns >10000\n", e[i].name);

        if(strcmp(e[i].desg,"AsstManager")==0)
            printf("%s is Asst Manager\n", e[i].name);
    }

    printf("Male=%d Female=%d\n", male,female);
}
