#include <stdio.h>
#include <stdlib.h>
#include <time.h> //use time value as the seed for the random no.

int main()
{
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\tWELCOME TO OUR HOTEL OCEAN VIEW\n");
    printf("\t manager - Archit saxena\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("To book your room press 1\n");
    printf("To book your dinner press 2\n");
    printf("To cancel press 6\n");
    printf("To rate us press 7\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("Enter your prefrence-");
    int numb;
    scanf("%d", &numb);
    switch (numb)
    {
    case 1: // room booking
        printf("enter yor name-");
        char name[256]; // a asign for name
        scanf("%ch", &name);
        fgets(name, 256, stdin);

        int adh[12]; // adh asign for adhar card number
        printf("Enter Your Adhar Card no.-");
        scanf("%d", &adh);

        int b; // b asing for no.
        printf("enter your phone no.");
        scanf("%d", &b);
        if (b < 1000000000 || b > 9999999999)
        {
            printf("");
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("***WARNING PLEASE ENTER THE CORRECT AMOUNT, WE ARE NOT RESPONSIBLE FOR ANY LOSS***\n");
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("\nselect your room -\n");
            printf("amount                rooom type\n");
            printf("rs.1500               NON AC, 1BHK \n");
            printf("rs.2000                   AC, 1BHK  \n");
            printf("rs.5000                   AC, 2BHK  \n");
            printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            int c; // c asign for amount
            printf("Enter your Amount -");
            scanf("%d", &c);
            // switch for amount
            switch (c)
            {
            case 1500:
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                printf("your booking for 1500 NON AC, 1BHK has been booked\n");
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                // random no. generated starts here
                int rndmn;

                srand(time(NULL));

                rndmn = rand() % 55;

                printf("your room no. is - %d\n", rndmn);
                // random no. genereated ends here
                break;
            case 2000:
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                printf("your booking for 2000 AC, 1BHK has been booked\n");
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                // random no. generated starts here
                int rndmn_;
                int upper = 85, lower = 55;

                srand(time(NULL));

                rndmn_ = (rand() % (upper - lower + 1)) + lower;

                printf("your room no. is - %d\n", rndmn_);
                // random no. genereated ends here
                break;
            case 5000:
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                printf("your booking for 5000 AC, 2BHK has been booked\n");
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                // random no. generated starts here
                int rndmn__;
                int upper_ = 105, lower_ = 95;

                srand(time(NULL));

                rndmn__ = (rand() % (upper_ - lower_ + 1)) + lower_;

                printf("your room no. is - %d\n", rndmn__);
                // random no. genereated ends here
                break;
            default:
                printf("please enter the valid amount\n ");
                printf("\n***WARNING PLEASE ENTER THE CORRECT AMOUNT, WE ARE NOT RESPONSIBLE FOR ANY LOSS***\n");
                break;
            }
            // swith for amount close
        }
        else
        {
            printf("invaid no. entered");
        }

        break;
    case 2: // dinner reservation
        printf("WELCOME BOOK OUR DINNER ");

        int ch, qty;
        printf("\n\tMENU CARD");
        printf("\n\t\t1.COFFEE             ---- Rs:55");
        printf("\n\t\t2.TEA                ---- Rs:20");
        printf("\n\t\t3.COLD COFFEE        ---- Rs:65");
        printf("\n\t\t4.INDIAN THALI(VEG)  ---- Rs:250");
        printf("\n\t\t5.NON VEG THALI      ---- Rs:250");
        printf("\n\t\t6.HOTEL SPECIAL      ---- Rs:250");
        printf("\n\t\t7.PANNER MOMOS       ---- Rs:90");
        printf("\n\t\t8.CHICKEN MOMOS      ---- Rs:100");
        printf("\n\t\t9.NON VEG. NOODLES      ---- Rs:250");
        printf("\n\t\t10.VEG. NOODLES     ---- Rs:150");
        printf("\n\t\t11.CHICKEN BRIYANI   ---- Rs:230");
        printf("\n\t\t12.CHICKEN TIKA      ---- Rs:150");
        printf("\n\t\t13.VEG. THALI          ---- Rs:150");
        printf("\n\t\t14.VEG. BIRYANI            ---- Rs:250");
        printf("\n\n Enter Your choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nYou have selected Coffee");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 55));
            break;
        case 2:
            printf("\nYou have selected Tea");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 20));
            break;
        case 3:
            printf("\nYou have selected Cold Coffee");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 65));
            break;
        case 4:
            printf("\nYou have selected INDIAN THALI(VEG)");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 250));
            break;
        case 5:
            printf("\nYou have selected NON VEG THALI");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 250));
            break;
        case 6:
            printf("\nYou have selected HOTEL SPECIAL");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 250));
            break;
        case 7:
            printf("\nYou have selected PANNER MOMOS");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 90));
            break;
        case 8:
            printf("\nYou have selected CHICKEN MOMOS");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 100));
            break;
        case 9:
            printf("\nYou have selected NON VEG NOODELS");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 250));
            break;
        case 10:
            printf("\nYou have selected VEG NOODELS");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 150));
            break;
        case 11:
            printf("\nYou have selected CHICKEN BRIYANI");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 230));
            break;
        case 12:
            printf("\nYou have selected CHICKEN TIKA");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 150));
            break;
        case 13:
            printf("\nYou have selected VEG THALI");
            printf("\nEnter the Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 150));
            break;
        case 14:
            printf("\nYou have selected VEG. BIRYANI");
            printf("\nEnter The Qty : ");
            scanf("%d", &qty);
            printf("\nTotal amount : %d", (qty * 250));
            break;
        // case 14:
        //     printf("\nYou have selected ROTI");
        //     printf("\nEnter The Qty : ");
        //     scanf("%d", &qty);
        //     printf("\nTotal amount : %d", (qty * 50));
        //     break;
        default:
            printf("\nInvalid Product Selection");
            break;
        }
        break;
    case 6: // cancelation
        printf("thanks for visit");
        break;
    case 7: // rating system
    {
        int rate;
        printf("@@@@@@@@@@@@@@@\n");
        printf("    RATE US\n");
        printf("@@@@@@@@@@@@@@@\n");
        printf("*  **  ***  ****  *****\n");
        printf("Enter your Rate-");
        scanf("%d", &rate);
        switch (rate)
        {
        case 1:
        {
            char feed[999999];
            printf("we are sorry for inconvenience\n");
            printf("feedback -- what you didn't/don,t like --");
            scanf("%ch", &feed);
            printf("we will surely look after your feedback\n");
            printf("VISIT AGAIN");
        }

        break;
        case 2:
        {
            char feed_[999999];
            printf("we are sorry for inconvenience\n");
            printf("feedback -- what you didn't/don,t like --");
            scanf("%ch", &feed_);
            printf("we will surely look after your feedback\n");
            printf("VISIT AGAIN");
        }

        break;
        case 3:
        {
            char feed__[999999];
            printf("we are sorry for inconvenience\n");
            printf("feedback -- what you didn't/don,t like --");
            scanf("%ch", &feed__);
            printf("we will surely look after your feedack\n");
            printf("VISIT AGAIN");
        }

        break;
        case 4:
        {
            char feed___[999999];

            printf("feedback -- what you didn't/don,t like --");
            scanf("%ch", &feed___);
            printf("we will surely look after your feedback\n");
            printf("VISIT AGAIN");
        }

        break;
        case 5:
            printf("THANK YOU FOR YOUR FEEDBACK");

            break;

        default:
            printf("VISIT AGAIN");
            break;
        }
    }
    break;

    default:
        printf("invalid no.");
        break;
    }

    return 0;
}