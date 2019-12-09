/*输出X的N次方*/ 
#include <stdio.h>
double calc_pow( double x, int n );
int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}
double calc_pow( double x, int n )
{
	int i,t=1;
	for(i=1;i<=n;i++)
	{
		t*=x;
	}
	return t;
}
