#include <stdio.h>
char str[10000001];

int main(){
    scanf("%s",str);
    int count[26]={0};
    for(int i=0; str[i]!='\0'; i++){
        int val=str[i]-'a';//kono ekta string er  index value such as c etar age asciii value  99 ber hbe then ei ascii value a er sathe biyog hole etar ndexs ber hobe ,lowercase er index 'a' - 'a' = 0  → index 0,'b' - 'a' = 1  → index 1,'c' - 'a' = 2  → index 2 evabe ber hoy then exact index 2 e c er value bosai then 
        count[val]++;
    }
    
    for(int i=0; i<26; i++){
        if(count[i] > 0){
            printf("%c : %d\n", 'a'+i, count[i]);//ex:i = 2,- 'a' + 2 = 97 + 2 = 99,- %c prints it as character 'c',era sob kisu ascii value diye value ber kore

        }
    }

    return 0;
}