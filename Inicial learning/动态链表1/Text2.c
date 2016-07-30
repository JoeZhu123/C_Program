#include<stdio.h>
#include<malloc.h>
#define L sizeof(struct letter)
struct letter
{
	int asc;
	char x;
	struct letter *next;
};
int m,n;
struct letter *create(void)
{
	struct letter *head,*p;
	int i;
	head = NULL;
	for(i = m;i <=n;i++)
		{
			p = (struct letter*)malloc(L);
			p->asc=p->x=i;
			p->next=head;
			head = p;
		}
	return head;
}
void main()
{
	struct letter *first,*p;
	printf("input m and n:(32 < m < n < 126)\n");
	scanf("%d%d",&m,&n);
	first = create();
	p = first;
	printf("The linked list is:\n");
	while(p!=NULL)
	{
		printf("%d\t%c\n",p -> asc,p -> x);
		p = p -> next;
	}
}