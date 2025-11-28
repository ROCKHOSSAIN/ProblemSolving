#include <stdio.h>
int main() {
 
     int a;
    scanf("%d",&a);
   int sum=a/1000;
    if(sum%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
      return 0; 
}
//1st digit ber korar jonno amra number ke joto gula 1 er sathe 0 jog korbo totogula number kata jabe last theke
//example:4565 ke 1000 diye vag korle 1 er por 3 ta 0 ache tai last theke 3 ta number kata jabe.
//vag korle vagfol pabo and modulus korle vagsesh pabo