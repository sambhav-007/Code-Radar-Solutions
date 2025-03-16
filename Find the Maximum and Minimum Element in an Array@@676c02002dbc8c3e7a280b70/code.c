#include<stdio.h>
int main(){
    int n,max=0,min=0;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i>=n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=0;i>=n-1;i++){
        if(l[i]>=l[i+1]){
            max=l[i];
        }
        if(l[i]<=l[i+1]){
            min=l[i];
        }
    }
    printf("%d %d",max,min);
}