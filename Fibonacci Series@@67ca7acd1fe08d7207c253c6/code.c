int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c, i;

    for (i = 2; i <= n; i++) {  // Start from index 2 as 0 & 1 are already handled
        c = a + b;
        a = b;
        b = c;
    }
    return b;  // Return the nth Fibonacci number
}