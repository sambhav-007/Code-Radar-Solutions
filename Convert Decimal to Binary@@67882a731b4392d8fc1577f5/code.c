#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }

    int binary[32], i = 0;
    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;
    scanf("%d", &decimal);
    decimalToBinary(decimal);
    return 0;
}

