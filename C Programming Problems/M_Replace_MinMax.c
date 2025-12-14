#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
   int indexMin=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            indexMin=i;
        }
       
    }

    int max=arr[0];
    int indexMax=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            indexMax=i;
        }
        
       
    }

int temp=arr[indexMin];
arr[indexMin]=arr[indexMax];
arr[indexMax]=temp;
 for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}