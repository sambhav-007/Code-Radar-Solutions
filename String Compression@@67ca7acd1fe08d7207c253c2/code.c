#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int len = strlen(str);
    int index = 0, count = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[index++] = str[i]; 
            
            if (count > 1) { 
                index += sprintf(&compressed[index], "%d", count);
            }
            
            count = 1; 
        }
    }

    compressed[index] = '\0'; 

    if (index >= len) {
        strcpy(compressed, str);
    }
}
