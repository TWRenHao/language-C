/*要求编写并调用函数encrypt ()，按要求修改字符串内容。变换规则如下：
小写字母z变换成为a，其他字母变换成为该字母ASCII码顺序后一位的字母，比如o变换成为p。*/
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
	x=strlen(s);            /*strlen()计算字符串长度；sizeof()计算数组长度*/ 
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
