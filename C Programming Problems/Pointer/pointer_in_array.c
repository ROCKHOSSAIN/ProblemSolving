#include <stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    *a=100;//derederence kore 100 *a mane 0 no index value change hoise ,jodi iccha moto onno index cai tahole

    *(a+2)=500;//2 no index value change korbe
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}