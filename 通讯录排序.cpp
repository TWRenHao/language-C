/*����n�����ѵ���Ϣ���������������ա��绰���룬
��������Ӵ�С��˳���������ͨѶ¼*/
#include<stdio.h>
#include<string.h>
struct contact
{
	char name[11];   
	int birth;
	char phone[18];
};
 
int main()
{
	struct contact person[10] = { '\0' };
	int i, j, N;
	struct contact temp;
	scanf("%d\n", &N);
	for (i = 0; i<N; i++)
	{
		scanf("%s%d%s", person[i].name, &person[i].birth, person[i].phone);
	}
	for (i = 0; i < N - 1; i++)
    {
		for (j = 0; j < N - i - 1; j++)
		{
			if (person[j].birth > person[j + 1].birth)
			{
				temp = person[j];
				person[j] = person[j + 1];
				person[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%s %d %s\n", person[i].name, person[i].birth, person[i].phone);
	}
	return 0;
}
