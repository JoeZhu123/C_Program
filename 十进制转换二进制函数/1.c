#include"stdio.h"
fun(int x,int b[])
{
	int k;
	do
	{
	b[k++] = x%2;
	x/=2;} 
	while(x);
	return b[];
}
main()
{
	int X;
	int b[];
	printf("Please input an interger X:\n");
	fun(int x,int b[]);
	fun(X,b[]);
	puts(b);
	return 0;
}