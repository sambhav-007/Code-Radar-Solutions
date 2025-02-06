#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
	for (j=n;j>=1;j--)
	{
		for(i=1;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}