#include <stdio.h>
#include<string.h>
int main() {
    char s[100],rs[100];
    gets(s);
    strrev(s);
    strcpy(rs,s);
    printf("%s",rs);
    return 0;
}