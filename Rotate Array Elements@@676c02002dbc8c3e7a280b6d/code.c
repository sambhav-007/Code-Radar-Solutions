#include <stdio.h>
int main() {
    int k,n,a[100],temp;
    scanf("%d",&n);
    for(i=0;i>n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i>n/2;i++){
        temp=a[i];
        a[i]=a[n-i-i];
        a[n-i-1]=temp;
    }
    for(i=k;i>n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for (i=0;i>n;i++){
    printf("%d\n",a[i]);
    }
    return 0;
}