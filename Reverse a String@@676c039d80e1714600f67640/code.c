#include <stdio.h>
#include<string.h>
int main() {
    char s[100],rs[100];
    gets(s);
    rs=strrev(s);
    printf("%s",rs);
    return 0;
}