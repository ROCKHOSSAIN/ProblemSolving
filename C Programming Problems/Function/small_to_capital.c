#include <stdio.h>
void character(char alph){
    int capital;
    if(alph>='A'&& alph<='Z'){
     capital=alph+32;

    }else if(alph>='a'&& alph<='z'){
     capital=alph-32;

    }
    printf("%c",capital);
}
int main(){
    
//  char ch='a';
 char ch;
 scanf("%c",&ch);
  character(ch);

    return 0;
}