#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], temp[100];
    int choice;

    printf("Enter string: ");
    scanf("%s",str);

        printf("\n1.Length 2.Reverse 3.Copy 4.Concat 5.Compare");
        scanf("%d",&choice);

        switch(choice) {
            case 1: 
            printf("%lu", strlen(str));
            break;
            case 2: 
            strcpy(temp,str);  
            printf("%s",temp); 
            break;
            case 3: 
            strcpy(temp,str); 
            printf("%s",temp); 
            break;
            case 4: 
            scanf("%s",temp); 
            strcat(str,temp); 
            printf("%s",str); 
            break;
            case 5: 
            scanf("%s",temp);
            if(strcmp(str,temp)==0) 
            printf("Equal");
            else
            printf("Not Equal");
            break;
            default:
            printf("Invalid choice");
       
    } 

    return 0;
}
