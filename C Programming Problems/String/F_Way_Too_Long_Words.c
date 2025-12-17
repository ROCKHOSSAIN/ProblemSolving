#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char str[100][101];  
    
    for(int i=0;i<t;i++){
        scanf("%s",str[i]);
        int len=strlen(str[i]);
        if(len>10){
           char f_char=str[i][0];
           int middle=len-2;
           char l_char=str[i][len-1];
           printf("%c%d%c\n",f_char,middle,l_char);
        }else{
        printf("%s\n",str[i]);

        }
    }
    
    return 0;
}