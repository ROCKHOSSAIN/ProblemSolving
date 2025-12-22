#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<= n;i++){//is used for line
        for(int j=1;j<=i;j++){//is used to print star
            printf("*");
        }
        printf("\n");
    }

    return 0;
}