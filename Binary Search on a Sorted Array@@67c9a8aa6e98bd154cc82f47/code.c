int binarySearch(int arr[],int n,int target){
    for (int i=0;i<n;i++){
        int c=0;
        if(arr[i]==target){
            return i;
            c++;
        }

    }
    if (c==0){
            return -1;
        }
}