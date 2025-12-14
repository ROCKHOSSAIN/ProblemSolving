#include <stdio.h>
#include<limits.h>
int main(){
    int t;
    scanf("%d",&t);
    
    for(int test=0;test<t;test++){
        int n;
        scanf("%d",&n);
        int arr[n];
        
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int calculation= arr[i]+arr[j]+j-i;
                if(calculation<min){
                    min=calculation;
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}