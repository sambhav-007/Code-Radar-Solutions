#include<stdio.h>
#include<string.h>
void compressString(char *str,char *compressed){
    int len = strlen(str);
    int index=0, ctr=1;
    for (int i=0;i<len;i++){
        if (str[i]==str[i+1]){
            ctr++;
        }
        else {
    index += sprintf(&compressed[index], "%c%d", str[i], ctr);
    ctr = 1;
}
    }
    if (index >= len) {
    strcpy(compressed, str);
}
}