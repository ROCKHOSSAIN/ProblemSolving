#include<stdio.h>
int main(){
   char C;
   scanf("%c",&C);
   if(C>='A' && C<='Z'){
    C=C+32;
    printf("%c",C);
   }else{
    C=C-32;
    printf("%c",C);
   }
    return 0; 
}