#include <stdio.h>
int main(){
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    int i=0,j=len-1;
    int isPalindrome = 1;
    while(i<j){
        if(str[i]!=str[j]){
            isPalindrome=0;
            break;
        }else{
            i++;
            j--;
        }
    }
    if(isPalindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}