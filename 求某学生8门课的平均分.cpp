/*某学生的记录由学号、8门课成绩和平均分组成，学号和8门课成绩在主函数中给出。
fun函数，功能是：求出该学生的平均分放在ave成员中。函数中的参数由学生自己给出。*/
#include <stdio.h>
#define  N  8
struct student
{
char num[10];
float a[N];
float ave;
};
void fun();
int main()
{
struct student s={"007",89.5,98.0,67.5,88.0,90,77,79,97};
int i;
fun(&s);
printf("The %s's student data:\n",s.num);
for(i=0;i<N;i++)
printf("%4.1f\n",s.a[i]);
printf("ave=%7.2f\n",s.ave);
return 0;
}
void fun(struct student *s)
{
    float t;
    for(int i=0;i<8;i++)
	{
		t+=s->a[i];  /*结构体传参时->与.的区别*/ 
	}
	s->ave = t/8;
}
