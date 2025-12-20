#include <stdio.h>
#include <string.h>
int main(){
    char str[10001];
    int T;
    scanf("%d",&T);
    
    for(int test=0; test<T; test++){
        scanf("%s", str);
        
        int capital_count=0;
        int small_count=0;
        int num_count=0;
        
        for(int i=0; i<strlen(str); i++){
            if(str[i]>='A' && str[i]<='Z'){
                capital_count++;
            }
            else if(str[i]>='a' && str[i]<='z'){
                small_count++;
            }
            else if(str[i]>='0' && str[i]<='9'){
                num_count++;
            }
        }
        
        printf("%d %d %d\n", capital_count, small_count, num_count);
    }
    
    return 0;
}