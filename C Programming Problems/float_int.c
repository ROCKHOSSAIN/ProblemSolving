#include <stdio.h>
int main() {
 
     float N;
     scanf("%f", &N);
     if(N-(int)N==0){
        printf("int %.0f", N);
     } else {
        int integerPart = (int)N;
        float decimalPart = N - integerPart;
        printf("float %d %.3f", integerPart, decimalPart);  
    }
    
    return 0; 
}