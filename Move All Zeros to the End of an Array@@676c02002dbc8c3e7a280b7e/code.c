#include <stdio.h>

int main() {
    int n,i,j,ctr=1;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=0;j<n;j++){
        for (i=0;i<n-1;i++){
            if (a[i]==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    return 0;
}