/*Ҫ���д�����ú���encrypt ()����Ҫ���޸��ַ������ݡ��任�������£�
Сд��ĸz�任��Ϊa��������ĸ�任��Ϊ����ĸASCII��˳���һλ����ĸ������o�任��Ϊp��*/
#include <stdio.h>
# include <string.h>
# define MAXLINE 80
void encrypt ( char *s);
int main (void)
{
   char line [MAXLINE];
   gets(line);
   encrypt (line);
   printf ("%s\n", line);
   return 0;
}
void encrypt ( char *s)
{
	int x;
	x=strlen(s);            /*strlen()�����ַ������ȣ�sizeof()�������鳤��*/ 
	for(int i = 0;i<x;i++)
	{ 
	char *p;
	p = s;
	if(*p=='z')
	*p='a';
	else
    *p=*p+ 1;
    s++;
	}
}
