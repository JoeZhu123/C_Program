#include"stdio.h"
#define MAX 200
int a[MAX],b[MAX],cnt=0;
void writeDat();
void jsVal()
{}
void readDat()
{
	int i;
	FILE*fp;
	fp=fopen("in.txt","r");
	for(i=0;i<MAX;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	fclose(fp);
}

void main()
{
	int i;
	readDat();
	jsVal();
	printf("满足条件的数=%d\n",cnt);
	for(i=0;i<cnt;i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");
	writeDat();
}

void writeDat()
{
	FILE*fp;
	int i;
	fp=fopen("out.txt","w");
	fprintf(fp,"%d\n",cnt);
	for(i=0;i<cnt;i++)
	{
		fprintf(fp,"%d\n",b[i]);	
	}
	fclose(fp);
}