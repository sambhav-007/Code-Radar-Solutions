int binarySearch(int arr[],int n,int target){
    int c=0;
    for (int i=0;i<n+1;i++){
        if(arr[i]==target){
            c++;
            return i;
        }if (c==0){
            return -1;
        }
    }
}