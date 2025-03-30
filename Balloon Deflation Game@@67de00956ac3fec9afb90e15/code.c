void deflateBalloons(int air[]; int n){
    int ctr=0;
    for(int i=0;i<n;i++){
        if(air[i]>0){
            ctr++;
            air[i]-=1;
        }
    }

}