#include <stdio.h>

void decimalToBinary(int num) {
    int i;
    int started = 0;  

    if (num == 0) {
        printf("0\n");
        return;
    }

    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;

        if (bit == 1) {
            started = 1;
        }
        
        if (started) {
            printf("%d", bit);
        }
    }
    printf("\n");
}

int main() {
    int decimal;

    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
