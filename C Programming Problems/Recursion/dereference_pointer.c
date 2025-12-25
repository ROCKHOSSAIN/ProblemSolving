#include <stdio.h>
int main(){
    int x=100;
    printf("%d\n",x);
    printf("%p\n",&x);//address print kore;dhoro address 0F21

    int*ptr; 
    ptr = &x; //x er address ptr e print kortasi TAILE 0F21 hobe

    *ptr = 200;//ekhon ptr* mane ptr er modde jei address value ache 0F21 oi reference e jeye 100 value ta 200 kore dibe
    printf("%d\n",x);


    return 0;
}
//address theke value te jai oita derefference