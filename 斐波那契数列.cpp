#include<stdio.h>
#define N 1000
main()
{
	int n,i,j;
	int a[N]={1,1};
	scanf("%d",&n);
	for(i=0;i<=n-2;i++)
	{
		a[i+2]=a[i+1]+a[i]; 
	}
	for(j=0;j<n;j++){
		printf("%d ",a[j]);
	}
}
