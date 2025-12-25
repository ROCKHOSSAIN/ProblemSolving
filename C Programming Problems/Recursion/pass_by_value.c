#include <stdio.h>
void fun(int x){//its called pass by value 
    x=20;
    printf("main function x address:%p\n",&x);

}
int main(){
    int x=10;
    fun(x);
    printf("main function x address:%p",&x);

    return 0;
}

//in this way we cant change value ,to change value we eed pass by reference