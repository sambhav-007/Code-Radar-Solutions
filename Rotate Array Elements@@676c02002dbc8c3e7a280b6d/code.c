#include <stdio.h>

int main() {
    int i, k, n, a[100], temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &k);
    if (k > n) k = n;

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

   
    for (i = 0; i < k / 2; i++) {
        temp = a[i];
        a[i] = a[k - i - 1];
        a[k - i - 1] = temp;
    }
    for (i = k; i < (n + k) / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1 + k];
        a[n - i - 1 + k] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
