int findOccurrence(int arr[],int n,int target,char mode){
    int occ[100],j=0,f=0;
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            occ[j++]=i;
            f++;
        }
    }
    if(f==0){
        return -1;
    }
    if(mode=='F'){
        return occ[0];
    }
    else{
        return occ[j-1];
    }
}