#include <stdio.h>
int main(){

    int x=10;
    printf("x value --%d\n",x);
    printf("x address--%p\n",&x);//%p mainly address print er jonno use hoy format specifier



    //jodi address nia kaj korte hoy tokhon pointer variable maddhome kaj korte hoy

    int * ptr;//address rakhar jonno pointer er jonno *(star) use kore 
    ptr = &x;
     printf("x address after ptr--%p\n",ptr);
     printf("ptr address--%p\n",&ptr);

    return 0;
}


//pointer hocche ekta variable jeta onno variable er address ke store kore