#include <stdio.h>
void fun(int*p){//address rakha jay pointer type variable e 
    *p = 20;
    // printf("main function x address:%p\n",&x);

}
int main(){
    int x=10;
    fun(&x);
    printf("main  x :%d",x);

    return 0;
}

//in this way we cant change value ,to change value we eed pass by reference