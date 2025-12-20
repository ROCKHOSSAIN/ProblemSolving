#include <stdio.h>
#include<stdbool.h>
int main(){
    char a[21],b[21];
    scanf("%s %s",a,b);
    int i=0;
    while(true){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("%s\n",a);  
            break;
        }
        else if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("%s\n",a);
            break;
        }
        else{
            printf("%s\n",b);  
            break;
        }
    }


    return 0;
}