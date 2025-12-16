#include <stdio.h>
int main(){
    char str[1000001];
    int count=0;
    fgets(str,1000001,stdin);
    for(int i=0;str[i]!='\\';i++){
        printf("%c",str[i]);
    }
    
    return 0;
}

//note :single blackslash diye blackslash er por kisu ase naki bujhayna tai double blackslash diye use korte hoy so that mone kore jate \0 ache