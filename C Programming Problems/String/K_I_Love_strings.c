#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    char str1[51],str2[51];
    
    for(int i=0;i<t;i++){
        scanf("%s %s",str1,str2);  
        
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int max_len = (len1 > len2) ? len1 : len2;
        
        for(int j=0; j<max_len; j++){
            if(j < len1) printf("%c", str1[j]);
            if(j < len2) printf("%c", str2[j]);
        }
        printf("\n");
    }

    return 0;
}