int isPrime(int num){
    for (int i=2;i<=(num/2)+1;i++){
        if (num%i==0){
            return 0;
        }
        else 
        return 1;
    }
}