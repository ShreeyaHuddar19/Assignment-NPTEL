#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, len, flag = 1;

  
    printf("Enter first string: ");
    fgets(str1,100,stdin);

   
    len = strlen(str1);
    printf("Length of string: %d\n", len);

 
    for(i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);

  if(strcmp(rev,str1) == 0)
  {
      printf("The string is a palindrome.\n");
  
  }
    else
    {
        printf("The string is not a palindrome.\n");
    }


    printf("\nEnter second string: ");
    fgets(str2,100,stdin);
    
    if(strstr(str1, str2) == NULL)
        printf("Second string is a not substring of first string.\n");
    else
        printf("Second string is a substring of first string.\n");

    return 0;
}
