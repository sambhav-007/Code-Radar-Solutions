#include <stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
        }
    }

    if(flag==0){
        printf("Sorted");
    }
    else if (flag==1)
    printf("Not Sorted");
    return 0;


}