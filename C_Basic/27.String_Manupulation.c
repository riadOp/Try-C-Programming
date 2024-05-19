#include<stdio.h>
#include<string.h>

int main(){
    char str[50],str1[50];
    printf("Enter a String :");
    fgets(str,sizeof(str),stdin);
    printf("Your string : ");
    puts(str);

    strcpy(str1,str);
    printf("New copied string : ");
    puts(str1);

    printf("Join 2 string :\n");
    strcat(str,str1);

    printf("Compare 2 string : %d\n",strcmp(str1,str));
    

    printf("Size of string is %d",strlen(str1));
    return 0;
}