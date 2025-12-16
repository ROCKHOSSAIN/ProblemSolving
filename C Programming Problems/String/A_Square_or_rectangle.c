#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int length,width;
        scanf("%d %d",&length,&width);
        if(length==width){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }

    return 0;
}