#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],flag=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        flag=0;
        for (int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("%d ",arr[i]);
        }
    }
}