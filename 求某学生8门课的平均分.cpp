/*ĳѧ���ļ�¼��ѧ�š�8�ſγɼ���ƽ������ɣ�ѧ�ź�8�ſγɼ����������и�����
fun�����������ǣ������ѧ����ƽ���ַ���ave��Ա�С������еĲ�����ѧ���Լ�������*/
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
		t+=s->a[i];  /*�ṹ�崫��ʱ->��.������*/ 
	}
	s->ave = t/8;
}
