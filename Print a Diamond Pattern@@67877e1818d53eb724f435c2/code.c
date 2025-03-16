#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for (i=n;i>1;i--){
        for(j=0;j<n;j++){
            printf(" ");
        }
        for(k=0;k<n;k++){
            printf("*");
        }
        printf("\n");
    }
    
}