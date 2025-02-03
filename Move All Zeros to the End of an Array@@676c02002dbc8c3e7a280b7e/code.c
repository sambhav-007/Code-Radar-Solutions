#include <stdio.h>

int main() {
    int n,i,j,ctr=1;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (j=0;j<n;j++){
        for (i=0;i<n-1;i++){
            if (a[j]==0){
                temp=a[j];
                a[j]=a[j+1];
                a[n-ctr]=temp;
            }
        }
    }
    return 0;
}