#include <stdio.h>
#include <math.h>
int main(){
    int r;
    scanf("%d",&r);
    int arr[r][r];
    int count1=0,count2=0,sum1=0,sum2=0,absolute_value;
    int primary_diagonal[r],secondary_diagonal[r];
    for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
             scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
            //primary diagonal
                if(i==j){
                    primary_diagonal[i]=arr[i][j];
                    count1++;
                }

                //secondary diagonal
                if(i+j==r-1){
                    secondary_diagonal[i]=arr[i][j];
                    count2++;
                }
            }
        }
         for(int k=0;k<count1;k++){
            sum1+=primary_diagonal[k];
        }
         for(int k=0;k<count2;k++){
            sum2+=secondary_diagonal[k];
        }
        absolute_value=abs(sum1-sum2);
    
    printf("%d",absolute_value);
    return 0;
}