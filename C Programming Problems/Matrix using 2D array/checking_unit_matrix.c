#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
   
    int is_diagonal=100;
    int is_unit=1000;
    int diagonal[r];
    int count = 0;
     for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             scanf("%d",&arr[i][j]);
            }
        }
        if(r==c){
             for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==j){
                    diagonal[count]=arr[i][j];
                    count++;
                }
                else{
                    if(arr[i][j]!=0){
                        is_diagonal=200;
                        printf("Its not diagonal\n");
                    }
                }
            }
        }
        for(int k=0;k<count;k++){
            
           if(diagonal[k]!=1){
            is_unit=2000;
            break;
           }

        }
        if(is_unit == 1000 && diagonal[0]!=0 && is_diagonal==100){
            printf("Its Unit Matrix");
        }else{
            printf("Its not Unit Matrix");

        }

        }else{
     printf("Its not a square matrix & diagonal");

    }

    return 0;
}