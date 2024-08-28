#include <stdio.h>
#include <stdlib.h>



void main()
{
    system ("COLOR 9F");
    printf("\t\t\t        ________________________________________\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                  MINI                |\n");
    printf("\t\t\t\t\|                 _ATM_                |\n");
    printf("\t\t\t\t\|                                      |\n");
    printf("\t\t\t\t\|                                      |\n");

    printf("\t\t\t\t|______________________________________|\n");
    printf("\t\t\t\t\t  WELCOME TO MINI ATM       \n");
    printf("\n \n");

    int pin,pin1=5445,choic,amt,balan=1500,c=1;
    start:


    printf("\t\t\t\t\t  ENTER YOUR PIN :");
    scanf("%d",&pin);
    printf("\n\n");

    if(pin==pin1)
    {
        printf("\t\t\t\t\t  ENTER YOUR OPERATION\n");
        printf("\t\t\t\t\t  PLEASE SELECT YOUR CHOICE\n");
        printf("\t\t\t\t\t  1.DEPOSIT\n");
        printf("\t\t\t\t\t  2.WITHDRAW\n");
        printf("\t\t\t\t\t  3.CHECK BALANCE\n");
        printf("\t\t\t\t\t  4.CHANGE PIN \n");
        scanf("%d",&choic);

        switch(choic)
        {
        case 1:
            printf("\t\t\t\t\t  ENTER AMOUNT YOU WANT TO DEPOSIT\n");
            scanf("%d",&amt);
            if(amt<=30000)
            {
                balan=balan+amt;
                printf("\t\t\t\t\t  AMOUNT YOU DEPOSITED %d\n",amt);
                printf("\t\t\t\t\t  CURRENT BALANCE IN YOUR ACCOUNT %d\n",balan);
                printf("\n\n");
            }
            else
            {
                printf("\t\t\t\t\t  MAX LIMIT CROSSED");
                printf("\n\n");

            }
            goto start;
            break;
        case 2:
            printf("\t\t\t\t\t  ENTER THE AMOUNT YOU WANT WITHDRAW\n");
            scanf("%d",&amt);
            if(amt<=30000)
            {
                if(amt<=balan)
                {
                 balan=balan-amt;
                 printf("\t\t\t\t\t  AMOUNT YOU WITHDRAWED %d\n",amt);
                 printf("\t\t\t\t\t  CURRENT BALANCE IN YOUR ACCOUNT %d\n",balan);
                 printf("\n\n");

                }
                else
                {
                    printf("\t\t\t\t\t  INSUFFICIENT BALANCE");
                    printf("\n\n");
                    goto start;
                }
            }
            else
            {
                printf("\t\t\t\t\t  MAX LIMIT CROSSED");
                printf("\n\n");
            }
            //goto start;
            break;
        case 3:

            printf("\t\t\t\t\t  CURRENT BALANCE IN YOUR ACCOUNT %d",balan);
            printf("\n\n");
            goto start;
            //printf("\t\t\t\t\t  ")
            //scanf("%d");
            break;
        case 4:
            printf("\t\t\t\t\t  ENTER YOUR NEW PIN:");
            scanf("%d",&pin1);
            printf("\t\t\t\t\t  YOUR PIN CHANGED SUCCESFULLY\n");
            printf("\t\t\t\t\t  LOGIN AGAIN\n");
            printf("\n\n");
            goto start;
            break;
            goto start;
        }

    }
    else
    {
        printf("\t\t\t\t\t  YOUR ENTERED WRONG PIN\n");
        printf("\n\n");
        if(c<3)
        {
            c++;
            goto start;
        }
        printf("\t\t\t\t\t        !BLOCKED!\n");
    }

}
