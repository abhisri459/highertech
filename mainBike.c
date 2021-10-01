#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int j,t;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		int k=0,n,i;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=1;i<(n-1);i++)
		{
			if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
				k++;
		}
		printf("Case #%d: %d\n",j,k);
	}
	return 0;
}
