#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[10];
    int i,item,flag,c;
    for (i=0;i<10;i++)
    {
        printf("enter the element : ");
       scanf("%d",&a[i]); 
    }
    for (i=0;i<10;i++)
    {
       printf(" %d | ",a[i]); 
    }
    printf("");
    while(1)
    {
        printf("\n__________________________\n");
        printf("1. serching \n2. exit \n\n");
        printf("enter the choice : ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("\nenter the serching value : ");
                scanf("%d",&item);
                for(i=0 ; i<=10 ; i++){
                    if(a[i] == item)
                    {
                        flag = i+1;
                        break;
                    }
                    flag=0;
                }
                    if(flag !=0 ){
                    printf("\nitem found at location is : %d\n\n",flag); 
                    }
                    else{
                        printf("\nitem is not found !! \n\n");
                    }
                    
                break;
            case 2:
                exit(0);
                
        }
    }


}