#include <stdio.h>
#include<string.h>
int main(){
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    
    char concat[202];
    strcpy(concat, str1);
    strcat(concat, str2);
    
    char temp=str1[0];
    str1[0]=str2[0];
    str2[0]=temp;
    
    printf("%d %d\n",len1,len2);
    printf("%s\n",concat);  
    printf("%s %s\n",str1,str2); 


    return 0;
}