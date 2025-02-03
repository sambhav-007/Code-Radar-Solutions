#include <stdio.h>
#include<string.h>
int main() {
    char s[100],rs[100];
    int i,l;
    gets(s);
    l=strlen(s);
    for (i=l;i>=0;i--){
        rs[l]=s[i];
        l--;
    }
    printf("%s",rs);
    return 0;
}