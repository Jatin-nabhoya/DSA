#include<stdio.h>
#include<stdlib.h>
struct nodes {
	int data;
	struct nodes *next;
};
typedef struct nodes ND;
void main()
{
	ND *first;
	ND *t,*q;
	ND a,b,c;
	int ch,no;
   /*	first =&a;
	a.data=10;
	a.next=&b;

	b.data=20;
	b.next=&c;

	c.data=30;
	c.next=NULL;  */
	while(1)
	{
		printf("\npress 1 for insert first \npress 2 for insert last \npress 3 for delete first \npress 4 for delete last \npress 8 to traverse \n press 12 to exit \n");
		printf("\nenter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nenter number : ");
				scanf("%d",&no);
				t=(ND*)malloc(sizeof(no));
				t->data=no;
				t->next=first;
				first=t;
				break;
			case 2:
				printf("enter the number : ");
				scanf("%d",&no);
				t=(ND*)malloc(sizeof(no));
				t->data=no;
				t->next=NULL;
				if(first==NULL)
				{
					first=t;
				}
				else
				{
					q=first;
					while(q->next!=NULL)
					{
						q=q->next;
					}
					q->next=t;
				}
				break;

			case 4:
					if(first==NULL)
					{
						printf("linked list is empty ");
					}
					else
					{
						t=first;
						first=first->next;
						printf("deleted value is : %d \n\n",t->data);
						free(t);
					}


			case 8:
				t=first;
				printf("\n");
				while(t!=NULL)
				{
					printf("%d | ",t->data);
					t=t->next;
				}
				printf("\n\n");
				break;

			case 12:
				exit(0);

			default :
					printf("\ninvalid choice !!!! \n");

		}
	}

   /*	t=first;
	while(t!=NULL)
	{
		printf("%d | ",t->data);
		t=t->next;
	}*/
}