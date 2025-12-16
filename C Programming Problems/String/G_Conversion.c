#include <stdio.h>
int main(){
    char str[100001];
    fgets(str,100001,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-'a'+'A';//LAST E BORO CHARACTER thakle tokhon oi choto character ke boro te convert korbe 'b' - 'a' + 'A' -----------= (98 - 97) + 65 = 1 + 65 = 66 = 'B' evabei boro character pawa jay-- same evabe nicher choto character pawa jabe

        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
        else if(str[i]==','){
            str[i]=' ';
        }
    }
    printf("%s", str);
    

    return 0;
}