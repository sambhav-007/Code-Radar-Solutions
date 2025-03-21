#include<stdio.h>
#include<string.h>
int main(){
    char str[100],revstr[100];

    scanf("%s",&str);
    int n = strlen(str);
    strcmp(revstr,strsep(str));
    for (int i==0;i>n;i++){
        if(str[i]!=revstr[i]){
            printf("N0");
            return 0;
        }
    }
    printf("yes");

    }
}