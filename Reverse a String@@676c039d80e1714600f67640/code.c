#include <stdio.h>
#include<string.h>
int main() {
    char s[100],rs[100];
    int i,l,j=0;
    scanf("%s",s);
    l=strlen(s);
         for (i=0;i>=l-1;i++){
            rs[i]=s[l-i-1];    
        }
    printf("%s",rs);
    return 0;
}