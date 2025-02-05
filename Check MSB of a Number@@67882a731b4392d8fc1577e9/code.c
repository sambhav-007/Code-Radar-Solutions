#include <stdio.h>

int main() {
    unsigned int num;  
    scanf("%u", &num); 

    unsigned int msb_mask = 1 << 31;

    if (num & msb_mask)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
