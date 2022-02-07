/**
 * @file code.c
 * @author your name (aditya kumar)
 * @brief 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct info
    {
        int locality;
        int restaurant;
        int cuisine;
        char name[30];
        int house;
        long long int phone;
        int fprice;
    }i,n,p;

void locality_A ();
void locality_B ();
void locality_C ();

void rest ();
void cuis ();
void checkout ();
void payment();

void locality_A ()
{
    printf("\n\n");
        printf("\t\t\t\t\t1. BURGER KING\n");
        printf("\t\t\t\t\t2. KFC\n");
        printf("\t\t\t\t\t3.DOMINOS\n");
}
void locality_B ()
{
     printf("\n\n");
        printf("\t\t\t\t\t1. PIZZA HUT\n");
        printf("\t\t\t\t\t2. BURGER KING\n");
        printf("\t\t\t\t\t3. BIG FAT BURGER\n");
}
void locality_C ()
{
     printf("\n\n");
        printf("\t\t\t\t\t1. McDONALDS\n");
        printf("\t\t\t\t\t2. BURGER KING\n");
        printf("\t\t\t\t\t3. CHICKEN HOUSE\n");
}

void rest ()
{
        printf("\n\t\t\t\t\tSELECT RESTAURANT--> ");
        scanf("%d",&i.restaurant);

        switch(i.restaurant)
        {
        case 1:
            printf("\n\n");
            printf("\t\t\t\t\t...SELECT CUISINE...\n");
            printf("\n\n");
            printf("\t\t\t\tCODE-------------CUISINE------------PRICE------\n\n");
            printf("\t\t\t\t 1.----------------CUISINE 1----------RS.200-----\n");
            printf("\t\t\t\t 2.----------------CUISINE 2----------RS.60------\n");
            printf("\t\t\t\t 3.----------------CUISINE 3----------RS.160-----\n");
            printf("\t\t\t\t 4.----------------CUISINE 4----------RS.600------\n");
            printf("\t\t\t\t 5.----------------CUISINE 5----------RS.400------\n");
            printf("\t\t\t\t 6.----------------CUISINE 6----------RS.350------\n");
            printf("\t\t\t\t 7.----------------CUISINE 7----------RS.280------\n");
            printf("\t\t\t\t 8.----------------CUISINE 8----------RS.410------\n");
            break;
        case 2:
            printf("\n\n");
            printf("\t\t\t\t\t\t...SELECT CUISINE...\n");
            printf("\n\n");
            printf("\t\t\t\tCODE-------------CUISINE------------PRICE------\n\n");
            printf("\t\t\t\t 1.----------------CUISINE 1----------RS.200-----\n");
            printf("\t\t\t\t 2.----------------CUISINE 2----------RS.60------\n");
            printf("\t\t\t\t 3.----------------CUISINE 3----------RS.160-----\n");
            printf("\t\t\t\t 4.----------------CUISINE 4----------RS.600------\n");
            printf("\t\t\t\t 5.----------------CUISINE 5----------RS.400------\n");
            printf("\t\t\t\t 6.----------------CUISINE 6----------RS.350------\n");
            printf("\t\t\t\t 7.----------------CUISINE 7----------RS.280------\n");
            printf("\t\t\t\t 8.----------------CUISINE 8----------RS.410------\n");
            break;
            case 3:
                printf("\n\n");
            printf("\t\t\t\t\t\t...SELECT CUISINE...\n");
            printf("\n\n");
            printf("\t\t\t\tCODE-------------CUISINE------------PRICE------\n\n");
            printf("\t\t\t\t 1.----------------CUISINE 1----------RS.200-----\n");
            printf("\t\t\t\t 2.----------------CUISINE 2----------RS.60------\n");
            printf("\t\t\t\t 3.----------------CUISINE 3----------RS.160-----\n");
            printf("\t\t\t\t 4.----------------CUISINE 4----------RS.600------\n");
            printf("\t\t\t\t 5.----------------CUISINE 5----------RS.400------\n");
            printf("\t\t\t\t 6.----------------CUISINE 6----------RS.350------\n");
            printf("\t\t\t\t 7.----------------CUISINE 7----------RS.280------\n");
            printf("\t\t\t\t 8.----------------CUISINE 8----------RS.410------\n");
            break;
            default:
                printf("\t\t\t\t\t INVALID CHOICE\n");

        }
}


void cuis()
        {
            int no_order,x,cu_no,price;
            printf("\n\n");
            printf("\t\t\t\tENTER TOTAL NUMBER OF CUISINE YOU WANT TO ORDER--> ");
            scanf("%d",&no_order);
            printf("\n");
            for(x=0;x<no_order;x++)
            {
                printf("\t\t\t\t\tCUISINE %d ....\n",x+1);
                printf("\t\t\t\t\tSELECT CODE-->");
                scanf("%d",&cu_no);
                printf("\n");
                if(cu_no==1)
                {
                    price=200;
                }
                else if(cu_no==2)
                {
                    price=60;
                }
                 else if(cu_no==3)
                {
                    price=160;
                }
                 else if(cu_no==4)
                {
                    price=600;
                }
                 else if(cu_no==5)
                {
                    price=400;
                }
                 else if(cu_no==6)
                {
                    price=350;
                }
                 else if(cu_no==7)
                {
                    price=280;
                }
                 else if(cu_no==8)
                {
                    price=410;
                }

                i.fprice += price;
            }
            checkout();

            printf("\t\t\t\t\t TOTAL PRICE = %d\n",i.fprice);

            payment();

            printf("\n\t\t\t\t ENJOY YOUR MEAL.......... \n\n\n\n\n\n");


        }

void checkout ()
{
    printf("\n\n");
    printf("\t\t\t\tENTER YOUR FIRST NAME --> ");
    scanf("%s",&n.name);
    printf("\t\t\t\tENTER YOUR HOUSE NUMBER --> ");
    scanf("%d",&i.house);
    printf("\t\t\t\tENTER YOUR PHONE NUMBER--> ");
    scanf("%lld",&p.phone);

    printf("\n\n\t\t\t\t\t....ORDER SUMMARY....\n\n\t\t\t\t\t DELIVER TO -> \n\n");
    printf("\t\t\t\t\t NAME -> %s \n\t\t\t\t\t HOUSE NUMBER ->%d \n\t\t\t\t\t PHONE -> %lld\n",n.name,i.house,p.phone);

}
void payment ()
{
    int pay,valid,cvv,amount;
    long long int card_no;
    printf("\n\n");
    printf("\t\t\t\t CHOOSE A PAYMENT METHOD.......\n\n");
    printf("\t\t\t\t 1. PAY ON DELIVERY\n\t\t\t\t 2.CREDIT CARD/ DEBIT CARD\n");
    printf("\t\t\t\t");
    scanf("%d",&pay);
    switch(pay)
    {
    case 1:
        printf("\n\t\t\t\tYOU HAVE CHOSEN PAY ON DELIVERY....\n\n");
        printf("\t\t\t\t\tTOTAL AMOUNT DUE --> %d\n",i.fprice);
        break;

    case 2:
        printf("\n\t\t\t\t ENTER YOUR CARD NUMBER -->");
        scanf("%lld",&card_no);
        printf("\t\t\t\t ENTER CARD EXPIRY DATE IN FORM (mmyy) -->");
        scanf("%d",&valid);
        printf("\t\t\t\t ENTER CVV NUMBER -->");
        scanf("%d",&cvv);
        printf("\t\t\t\t ENTER AMOUNT -->");
        scanf("%d",&amount);

        printf("\n\n\t\t\t\t TRANSACTION SUCCESSFULL.....\n");
        printf("\n\n\t\t\t\t AMOUNT DUE --> %d\n\n",i.fprice-amount);
        break;
         default:
                printf("\t\t\t\t\t INVALID CHOICE\n");
    }

}
int main()
{
    int no_order,x;

    printf("\t\t\t\t\tXYZ FOOD ORDERING SYSTEM\n");
    printf("\n");
    printf("\t\t\t\t\t ......WELCOME......\n\n");

    printf("\t\t\t\t\t 1. LOCALITY A\n\t\t\t\t\t 2. LOCALITY B\n\t\t\t\t\t 3. LOCALITY C\n");
    printf("\n\t\t\t\t\tCHOOSE LOCALITY--> ");
    scanf("%d",&i.locality);

    switch(i.locality)

    {
        case 1:
        locality_A ();
                {
                    rest ();
                    {
                        cuis();
                    }
                }
            break;

        case 2:
        locality_B ();
                {
                    rest ();
                        {
                            cuis ();
                        }
                }
            break;
        case 3:
            locality_C ();
                {
                    rest ();
                        {
                            cuis ();
                        }
                }
                break;
        default:
            printf("\t\t\t\t\t INVALID CHOICE\n");
    }
}