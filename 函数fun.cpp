/*函数fun，函数的功能是：统计出若干个学生的平均成绩，最高分以及得最高分的人数*/
#include <stdio.h>
float Max=0;
int J=0;
float fun(float array[],int n);
int main()
{
float  a[10],ave;
int i=0;
for(i=0;i<10;i++)
scanf("%f",&a[i]);
ave=fun(a,10);
printf("ave=%.2f\n",ave);
printf("max=%.02f\n",Max);
printf("Total:%d\n",J);
return 0;
}

float fun(float array[],int n)
{
    float ave=0,cnt=0;
    int i,k=0;
    for(i=0;i<n;i++){
        ave+=array[i];
    }
    ave=1.0*ave/n;
    for(i=1;i<n;i++){
        if(array[i]>cnt){
            cnt=array[i];
        }
    }
    Max=cnt;
    for(i=0;i<n;i++){
        if(array[i]==cnt){
            k++;
        }
    }
    J=k;
    return ave;
}
