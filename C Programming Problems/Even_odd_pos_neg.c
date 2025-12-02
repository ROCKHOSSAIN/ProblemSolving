#include <stdio.h>
int main() {
 
    int num;
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        int x,even=0,odd=0,positive=0,negative=0;
        scanf("%d", &x);
        printf("%d\n", x);
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(x>0){
           positive++;
        }
        else if(x<0){
            negative++;
        }
       
    }
      return 0; 
}