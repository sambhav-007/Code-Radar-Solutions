#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    int max=l[0],min=l[0];
    for(int i=1;i<n;i++){
        if(l[i]>max){
            max=l[i];
        }
        if(l[i]<min){
            min=l[i];
        }
    }
    printf("%d %d",min,max);
}