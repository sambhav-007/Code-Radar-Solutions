#include <stdio.h>
#include<string.h>
int main() {
    char s[100],rs[100];
    int i,l,j=0;
    gets(s);
    l=strlen(s);
    for(j=0;j<l;j++){
         for (i=l-1;i>=0;i--){
            rs[j]=s[i];    
        }
    }
    printf("%s",rs);
    return 0;
}