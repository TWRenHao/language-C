#include <stdio.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
	int f,s,t,p,e,a=0,o;
	if(number==10000)
	{
		f=number%10,s=(number%100)/10,t=(number%1000)/100,e=(number/10000)/1000,o=number/10000;
	    p=(f*f*f*f*f+s*s*s*s*s+t*t*t*t*t+e*e*e*e*e+o*o*o*o*o);
	    if(p==number)
	    a=1;
	}
	else if(number/100>9)
	{
	    f=number%10,s=(number%100)/10,t=(number%1000)/100,e=number/1000;
	    p=(f*f*f*f+s*s*s*s+t*t*t*t+e*e*e*e);
	    if(p==number)
	    a=1;
	}
	else if(number/10>9)
	{
		f=number%10,s=(number%100)/10,t=number/100;
	    p=(f*f*f+s*s*s+t*t*t);
	    if(p==number)
	    a=1;
	}
	else if(number==100)
	{
		f=number%10,s=(number%100)/10,t=number/100;
	    p=(f*f*f+s*s*s+t*t*t);
	    if(p==number)
	    a=1;
	}
	return a;
 }
void PrintN( int m, int n )
{
	int i;
	for(i=m+1;i<=n;i++)
	{
		if(narcissistic(i))
		{
			printf("%d",i);
		    printf("\n");
		} 
	}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
