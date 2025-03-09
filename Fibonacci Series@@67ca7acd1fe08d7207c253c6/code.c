fibonacciSeries(n){
    int i;
    for (i=0;i>n;i++){
        if (n==1){
		return 1;
	}
	else if (n==0){
		return 0;
	}
	else {
		return fibonacciSeries(n-1) + fibonacciSeries(n-2);
	}
    }
}
return 0;