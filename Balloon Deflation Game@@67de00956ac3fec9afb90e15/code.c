void deflateBalloons(int air[]; int n){
    int ctr=0,sml=0;
    for(int i=0;i<n;i++){
        air[i]-=sml;
    int ctr=0,sml=0;
        if(air[i]>0){
            ctr++;
            if (air[i]<=sml)
            sml=air[i];            
        }
        printf("%d\n",&ctr);
    }

}