#include <stdio.h>
#include <string.h>
int main(){
    int ctr=0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    for (int i=0;i<strlen(str);i++){
        if(( i==0 || str[i-1]==' ')&&str[i]!=' '){
            ctr++;
        }
    }
    printf("%d",ctr);
}