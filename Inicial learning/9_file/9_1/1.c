/*程序名为l9_1.cpp*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;			
	FILE*fp;					//定义文件类型的指针变量fp
	fp=fopen("file.text","r");	//打开文本文件file
	if(fp==NULL)				//打开文件失败则退出
	{
		printf("cannot open this file\n");
		exit(0);
	}
	ch=fgetc(fp);				//读出文件中的字符并赋予变量ch
	while(ch!=EOF)				//判断文件是否结束
	{
		putchar(ch);			//输出从文件中读出的字符
		ch=fgetc(fp);			//读出文件中的字符并赋予变量ch
	}
	fclose(fp);					//关闭文件
}