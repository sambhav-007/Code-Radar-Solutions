void fibonacciSeries(int n) {
    int a = 0, b = 1, c, i;

    for (i = 0; i < n; i++) { 
        printf("%d ", a);  // Print the current Fibonacci number
        c = a + b;  // Compute the next term
        a = b;  
        b = c;  
    }
    printf("\n"); // Move to the next line after printing the series
}