#include <stdio.h>
int main() {
    int n,temp=0;
    scanf("%d",&n);
    int a[n];
    for (int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=1; i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i =0; i<n; i++){
        printf("%d ",&a[i]);
    }
    return 0;
}