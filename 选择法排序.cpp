#include<stdio.h>
main()
{
	int n,i,j,t;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	for(j=i+1;j<=n;j++)
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	for(i=1;i<n;i++)
	printf("%d ",a[i]);
	printf("%d",a[n]);
}
