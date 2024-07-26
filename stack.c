#include<stdio.h>
#include<stdlib.h>
struct stack
{
  int data[100];
  int size, top;
};
typedef struct stack S;

void
push (S * s)
{
  int n;
  if (s->top == s->size - 1)
    {
      printf ("\nstack overflow..!!!\n");
    }
  else
    {
      printf ("\nenter the value : ");
      scanf ("%d", &n);
      s->top++;
      s->data[s->top] = n;
    }
}

int
pop (S * s)
{
    int n;
    if (s->top == -1)
    {
      printf ("stack is underflow..!!!");
      return 0;
    }
    n=s->data[s->top];
    s->top--;
  return n;

}

void
peep (S * s)
{
  int n;
  if (s->top == -1)
    {
      printf ("\nstack is underflow...!!!\n");
    }
    else
    {
        printf ("\nvalue at top of stack :--> %d \n", s->data[s->top]);
    }
}

void
change (S * s)
{
  int n, c;
  if (s->top == -1)
    {
      printf ("\nstack is empty !!!\n");
    }
  printf ("\nenter index number :--> ");
  scanf ("%d", &n);
  printf ("\nenter new value :--> ");
  scanf ("%d", &c);
  s->data[n]=c;
}

void
display (S * s)
{
  int i;
  if (s->top == -1)
    {
      printf ("\nstack is empty !!!\n");
    }
    printf ("\n");
   for (i = 0; i <= s->top; i++)
    {
      printf ("  %d  |  ", s->data[i]);
    }
    printf("\n");
}

void main ()
{
  S s;
  int ch, n;
  s.size = 5;
  s.top = -1;
  while (1)
    {
      printf ("\npress 1 for push \npres 2 for pop \npress 3 for peep \n");
      printf
	("press 4 change \npress 5 to display \npress 6 to exit \nenter your choice :--> ");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  push (&s);
	  display (&s);
	  break;
	case 2:
	  n = pop (&s);
	  printf ("\npop value is :--> %d", n);
	  display (&s);
	  break;
	case 3:
	  peep (&s);
	  display (&s);
	  break;
	case 4:
	  change (&s);
	  display (&s);
	  break;
	case 5:
	  display (&s);
	  break;
	case 6:
	  exit (0);
	default:
	  printf ("invalid choice !!!");
	}
    }
}