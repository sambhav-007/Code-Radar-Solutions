int findOccurrence(int arr[],int n,int target,char mode){
    int occ[100],j=0;
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            occ[j++]=i;
        }
    }
    if(mode=='F'){
        return occ[0];
    }
    else{
        return occ[j-1];
    }
}