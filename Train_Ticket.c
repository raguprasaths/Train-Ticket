//Train Ticket

#include <stdio.h>
#include <conio.h>
void main()
{
    int a,d,t,price;
    printf("Enter your place:\n 1.srivi\n 2.rjpm\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("select your Destination\n1.Madurai\n2.Chennai\n");
        scanf("%d",&d);
        if(d==1)
        {
            printf("How many ticket:");
            scanf("%d",&t);
            price=t*50;
            printf("The price is=%d",price);
        }
        if(d==2)
        {
            printf("How many ticket:");
            scanf("%d",&t);
            price=t*500;
            printf("The price is=%d",price);
        }
    }
    if (a==2)
    {
        printf("select your Destination\n1.Sivakasi\n2.Madurai\n3.Chennai\n4.Coimbatore");
        scanf("%d",&d);
        if(d==1)
        {
         printf("How many ticket:");
            scanf("%d",&t);
            price=t*40;
            printf("The price is=%d",price);
        }
        if(d==2)
        {
            printf("How many ticket:");
            scanf("%d",&t);
            price=t*55;
            printf("The price is=%d",price);
        }
        if(d==3)
        {
            printf("How many ticket:");
            scanf("%d",&t);
            price=t*500;
            printf("The price is=%d",price);
        }
        if(d==4)
        {
            printf("How many ticket:");
            scanf("%d",&t);
            price=t*250;
            printf("The price is=%d",price);
        }


        getch();
    }


}
