#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int is_diagonal=100;
     for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             scanf("%d",&arr[i][j]);
            }
        }
    if(r==c){//square matrix 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){
                    //its a diagonal matrix
                }else{
                    //its outside of diagonal
                    if(arr[i][j]!=0){
                        is_diagonal=200;//jokhon 0  hbe na onno value hbe tokhon flag variable er moto value change korlam
                    printf("Its not a primary diagonal");

                    }
                }
            }
        }
        if(is_diagonal==100){
              printf("its a diagonal matrix");

        }
    }else{
     printf("Its not a square matrix & diagonal");

    }

    return 0;
}