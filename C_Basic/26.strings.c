#include<stdio.h>
#include<string.h>

int main(){
    char str[]={"Riad"};
    printf("%s\n",str);
    
    char str1[]={"Riad Islam"};
    printf("%s\n",str1);

    char str2[50];
    // scanf("%s",&str2);
    // printf("%s\n",str2);//Cannot print after space is detected.
    
    printf("Enter new string : ");
    fgets(str2,sizeof(str2),stdin);
    printf("New String is :");
    puts(str2);
    return 0;
}