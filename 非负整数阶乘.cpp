#include <stdio.h>
double factsum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.0f\n", factsum(n));
    return 0;
}
double factsum(int n)
{
	if(n==0)
		return 0;
	else
	{
		int i,j=1,sum=0;
		for(i=1;i<=n;i++)
		{
			j*=i;
	        sum+=j;
		}
return sum;
	}
}
