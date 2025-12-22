#include <stdio.h>
void sum(int num1,int num2){
    int sum= num1+num2;
    //amra jekono jayga theke return hoite pari main function e jawar jonno ,jehetu void ache tai amra return value korte parbo na ,like return sum jekhane sum e value ache.
    return;
    printf("%d",sum);
     
}
int main(){
    int a=15,b=20;
    sum(a,b);
    printf("hello world!!");//jokhon reutrn jei line e lekhsi oikhan theke sorasori 11 no line  sum e return kore kintu kono value asbe na sekhan theke, then 11 no line theke sequence way te line execute kore then 12 no line printf e hello world print kore
    return 0;
}

//ei kaj ta tokhon korbo jokhon ami mone kori function er kaj ta thamaia dite chai 