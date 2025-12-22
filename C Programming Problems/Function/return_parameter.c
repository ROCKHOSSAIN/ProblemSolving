#include <stdio.h>
int sum(int num1,int num2){
    return num1+num2;
}
int main(){
    int a=15,b=20;
    int result= sum(a,b);
    printf("%d",result);

    return 0;
}