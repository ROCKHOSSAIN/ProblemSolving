#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    int ispalindrome=1;
    while(i<j){
        if(arr[i]!=arr[j]){
            ispalindrome=0;
            printf("NO");
            break;
        }else{
            i++;
            j--;
        }
    }
if(ispalindrome){
        printf("YES");
    }
    return 0;
}