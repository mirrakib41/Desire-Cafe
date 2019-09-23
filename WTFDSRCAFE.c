#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

//*************************************************************************************
//                                Global Declaration
//****************e*********************************************************************
  char ch='y',r;
  int chc,sum_of_order,s;
  int quantity1,quantity2,quantity3,quantity4,quantity5,quantity6,quantity7,quantity8,quantity9, o,i;
  int quantity10,quantity11,quantity12,quantity13,quantity14,quantity15;
  int  pizza,chicken,shawarma,pasta,wedges,nachos,wings,lasagna,chowmein;
  int  qpizza,qchicken,qshawarma,qpasta,qwedges,qnachos,qwings,qlasagna,qchowmein;
  int  pizza1,chicken1,shawarma1,pasta1,wedges1,nachos1,wings1,lasagna1,chowmein1;
  int  hcoffee,ccoffee,cola,oreo,strawberry,chocomilk;
  int  qhcoffee,qccoffee,qcola,qoreo,qstrawberry,qchocomilk;
  int  hcoffee1,ccoffee1,cola1,oreo1,strawberry1,chocomilk1;
  char s1[]="Pizza\t\t\t\t 200 Taka";
  char s2[]="Chicken Sandwich\t\t  50 Taka";
  char s3[]="Shawarma\t\t\t 100 Taka";
  char s4[]="Pasta\t\t\t\t 100 Taka";
  char s5[]="Wedges\t\t\t\t  40 Taka";
  char s6[]="Nachos\t\t\t\t 120 Taka";
  char s7[]="Chicken wings(3pcs)\t\t 100 Taka";
  char s8[]="Lasagna\t\t\t\t 350 Taka";
  char s9[]="Chowmein\t\t\t  70 Taka";
  char b1[]="Hot coffee\t\t\t  30 Taka";
  char b2[]="Cold coffee\t\t\t  50 Taka";
  char b3[]="Cola\t\t\t\t  20 Taka";
  char b4[]="Oreo Crush Shake\t\t 100 Taka";
  char b5[]="Strawberry Shake\t\t 130 Taka";
  char b6[]="Chocolate Milk Shake\t\t 150 Taka";

//*************************************************************************************
//                                    FUNCTIONS
//*************************************************************************************

  int sum();
  void order();
  void payment();
  void desire();
  void more_desire();
  void cash();
  void credit();
  void list();
  void menu1();
  void menu2();
  void splash_screen();
  void delay(unsigned int mseconds);

//*************************************************************************************
//                          STRUCTURES USED IN PROJECT
//*************************************************************************************

struct cust
{
  char fname[50];
  char lname[50];
  char add[100];
  char  mob[14];
  char  crno[16];
}q;

//*************************************************************************************
//                                 MAIN FUNCTION
//*************************************************************************************




void main()
{   system("COLOR F1");
    splash_screen();
    pizza1=chicken1=shawarma1=pasta1=wedges1=nachos1=wings1=lasagna1=chowmein1=0;
    hcoffee1=ccoffee1=cola1=oreo1=strawberry1=chocomilk1=0;

    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD   DD  CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n\n");
    printf("\t\t\t\t\t\t\t\t\tWELCOME TO THE Desire Cafe\n");
    printf("\t\t\t\t\t\t\t\t     Fulfilling your desire for food\n");
    printf("\t\t\t\t\t\t\t\t\t\tSince 1997.\n\n");

    printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
    printf("\t\t\t\t\t\t\t_______________________ FOOD MENU _______________________\n\n");
    printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
    printf("\t\t\t\t\t\t\t01\t\t");
    for(i=0;s1[i];i++)
        printf("%c",s1[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t02\t\t");
    for(i=0;s2[i];i++)
        printf("%c",s2[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t03\t\t");
    for(i=0;s3[i];i++)
        printf("%c",s3[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t04\t\t");
    for(i=0;s4[i];i++)
        printf("%c",s4[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t05\t\t");
    for(i=0;s5[i];i++)
        printf("%c",s5[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t06\t\t");
    for(i=0;s6[i];i++)
        printf("%c",s6[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t07\t\t");
    for(i=0;s7[i];i++)
        printf("%c",s7[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t08\t\t");
    for(i=0;s8[i];i++)
        printf("%c",s8[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t09\t\t");
    for(i=0;s9[i];i++)
        printf("%c",s9[i]);
        printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
    printf("\t\t\t\t\t\t\t_______________________ BEVARAGES _______________________\n\n");
    printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
    printf("\t\t\t\t\t\t\t10\t\t");
    for(i=0;b1[i];i++)
        printf("%c",b1[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t11\t\t");
    for(i=0;b2[i];i++)
        printf("%c",b2[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t12\t\t");
    for(i=0;b3[i];i++)
        printf("%c",b3[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t13\t\t");
    for(i=0;b4[i];i++)
        printf("%c",b4[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t14\t\t");
    for(i=0;b5[i];i++)
        printf("%c",b5[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t15\t\t");
    for(i=0;b6[i];i++)
        printf("%c",b6[i]);
        printf("\n");
    printf("\n\t\t\t\t\t\t\tAre you ready to quench your desires?\n\t\t\t\t\t\t\tIf so, please press 1. To cancel please press 0\n\t\t\t\t\t\t\t :)");
    desire();
    sum_of_order=sum();
    list();

}
//*************************************************************************************
//                          START OF FUNCTION DEFINITION
//*************************************************************************************

void order()
{
 printf("\t\t\t\t\t\t\tPlease input your desired item's code:  ");
 scanf("%d",&o);
 fflush(stdin);
 switch(o)
      {
        case 1:
            printf("\t\t\t\t\t\t\tHow many Pizzas do you desire?");
            scanf("%d",&quantity1);
            pizza=(200*quantity1)+pizza;
            printf("\t\t\t\t\t\t\t%d Pizza(s) has been added to the list",quantity1);
            pizza1=1;
            qpizza=qpizza+quantity1;
            break;
        case 2:
            printf("\t\t\t\t\t\t\tHow many Chicken Sandwiches do you desire?");
            scanf("%d",&quantity2);
            chicken=(50*quantity2)+chicken;
            printf("\t\t\t\t\t\t\t%d Chicken Sandwiche(s) has been added to the list",quantity2);
            chicken1=1;
            qchicken=qchicken+quantity2;
            break;
        case 3:
            printf("\t\t\t\t\t\t\tHow many Shawarmas do you desire?");
            scanf("%d",&quantity3);
            shawarma=(100*quantity3);
            printf("\t\t\t\t\t\t\t%d Shawarma(s) has been added to the list",quantity3);
            shawarma1=1;
            qshawarma=qshawarma+quantity3;
            break;
        case 4:
            printf("\t\t\t\t\t\t\tHow many servings of Pastas do you desire?");
            scanf("%d",&quantity4);
            pasta=(100*quantity4)+pasta;
            printf("\t\t\t\t\t\t\t%d servings of Pastas has been added to the list",quantity4);
            pasta1=1;
            qpasta=qpasta+quantity4;
            break;
        case 5:
            printf("\t\t\t\t\t\t\tHow many servings of Wedges do you desire?");
            scanf("%d",&quantity5);
            wedges=(40*quantity5)+wedges;
            printf("\t\t\t\t\t\t\t%d servings Wedges has been added to the list",quantity5);
            wedges1=1;
            qwedges=qwedges+quantity5;
            break;
        case 6:
            printf("\t\t\t\t\t\t\tHow many servings of Nachos do you desire?");
            scanf("%d",&quantity6);
            nachos=(120*quantity6)+nachos;
            printf("\t\t\t\t\t\t\t%d servings of Nachos has been added to the list",quantity6);
            nachos1=1;
            qnachos=qnachos+quantity6;
            break;
        case 7:
            printf("\t\t\t\t\t\t\tHow many servings of Chicken wings do you desire?");
            scanf("%d",&quantity7);
            wings=(100*quantity7)+wings;
            printf("\t\t\t\t\t\t\t%d servings Chicken Wings has been added to the list",quantity7);
            wings1=1;
            qwings=qwings+quantity7;
            break;
        case 8:
            printf("\t\t\t\t\t\t\tHow many servings of Lasagna do you desire?");
            scanf("%d",&quantity8);
            lasagna=(350*quantity8)+lasagna;
            printf("\t\t\t\t\t\t\t%d servings of Lasagna has been added to the list",quantity8);
            lasagna1=1;
            qlasagna=qlasagna+quantity8;
            break;
        case 9:
            printf("\t\t\t\t\t\t\tHow many servings of Chowmein do you desire?");
            scanf("%d",&quantity9);
            chowmein=(70*quantity9)+chowmein;
            printf("\t\t\t\t\t\t%d servings of Chowmein has been added to the list",quantity9);
            chowmein1=1;
            qchowmein=qchowmein+quantity9;
            break;
        case 10:
            printf("\t\t\t\t\t\t\tHow many servings of Hot coffee do you desire?");
            scanf("%d",&quantity10);
            hcoffee=(30*quantity10)+hcoffee;
            printf("\t\t\t\t\t\t\t%d servings of Hot Coffee has been added to the list",quantity10);
            hcoffee1=1;
            qhcoffee=qhcoffee+quantity10;
            break;
        case 11:
            printf("\t\t\t\t\t\t\tHow many servings of Cold coffee do you desire?");
            scanf("%d",&quantity11);
            ccoffee=(50*quantity11)+ccoffee;
            printf("\t\t\t\t\t\t\t%d servings of Cold Coffee has been added to the list",quantity11);
            ccoffee1=1;
            qccoffee=qccoffee+quantity11;
            break;
        case 12:
            printf("\t\t\t\t\t\t\tHow many servings of Cola do you desire?");
            scanf("%d",&quantity12);
            cola=(20*quantity12)+cola;
            printf("\t\t\t\t\t\t\t%d Servings of Cola has been added to the list",quantity12);
            cola1=1;
            qcola=qcola+quantity12;
            break;
        case 13:
            printf("\t\t\t\t\t\t\tHow many servings of Oreo Crush Shake do you desire?");
            scanf("%d",&quantity13);
            oreo=(100*quantity13)+oreo;
            printf("\t\t\t\t\t\t\t%d servings of Oreo Crush Shake has been added to the list",quantity13);
            oreo1=1;
            qoreo=qoreo+quantity13;
            break;
        case 14:
            printf("\t\t\t\t\t\t\tHow many servings of Strawberry Milk Shake do you desire?");
            scanf("%d",&quantity14);
            strawberry=(130*quantity14)+strawberry;
            printf("\t\t\t\t\t\t\t%d servings of Strawberry Milk Shake has been added to the list",quantity14);
            strawberry1=1;
            qstrawberry=qstrawberry+quantity14;
            break;
        case 15:
            printf("\t\t\t\t\t\t\tHow many servings of Chocolate Milk Shake do you desire?");
            scanf("%d",&quantity15);
            chocomilk=(150*quantity15)+chocomilk;
            printf("\t\t\t\t\t\t\t%d servings of Chocolate Milk Shake has been added to the list",quantity15);
            chocomilk1=1;
            qchocomilk=qchocomilk+quantity15;
            break;
        default:
            printf("\n\t\t\t\t\t\t\tUh uhhh.... Please tell me you didn't just confuse me\n\t\t\t\t\t\t\twith a wrong choice....>:(\n\n");
            printf("\t\t\t\t\t\t\tTry again.And do it right.   :)");
            order();
           }
}

void payment()
{   printf("\n\t\t\t\t\t\t\tOkay. Got it.\n");
    printf("\t\t\t\t\t\t\tHow would you like to quench your desires?\n\t\t\t\t\t\t\tBy cold hard cash Or by Credit Card?\n");
    printf("\t\t\t\t\t\t\tFor Cash payment, Type 'M'\n");
    printf("\t\t\t\t\t\t\tFor Credit Card payment, Type 'C':  ");

    char r;
    fflush(stdin);
    scanf("%c",&r);

    if(r=='m' || r=='M')
    {
        cash();
    }
    else if(r=='c' || r=='C')
    {
        credit();
    }
    else
    {   printf("\n\t\t\t\t\t\t\tUh uhhh.... Please tell me you didn't just confuse me\n\t\t\t\t\t\t\twith a wrong choice....>:(\n\n");
        printf("\t\t\t\t\t\t\tTry again.And do it right.   :)\n");
        payment();
    }
}

void desire(int q)
{
    scanf("%d",&chc);
    fflush(stdin);
    switch(chc)
    {
    case 1:
        order();
        more_desire();
        break;
    case 0:
        exit(0);
    default:
        printf("\n\t\t\t\t\t\t\tUh uhhh.... Please tell me you didn't just confuse me\n\t\t\t\t\t\t\twith a wrong choice....>:(\n\n");
        printf("\t\t\t\t\t\t\tTry again.And do it right.   :)");
        printf("\n\t\t\t\t\t\t\tIf you are ready to quench your desires, please press 1. To cancel please press 0\n\t\t\t\t\t\t\t :)");
        desire(chc);
    }

}


void more_desire()
{
    printf("\n\t\t\t\t\t\t\tDo you have the desire for more(Y/N)?");
    fflush(stdin);
    scanf("%c", &ch);
    if(ch=='y' || ch=='Y')
    {
        system("cls");
        menu2();
        order();
        more_desire();
    }
    else if(ch=='n' || ch=='N')
    {
        system("cls");
        menu1();
        payment();
    }
    else
    {
        printf("\n\t\t\t\t\t\t\tUh uhhh.... Please tell me you didn't just confuse me\n\t\t\t\t\t\t\twith a wrong choice....>:(\n\n");
        printf("\t\t\t\t\t\t\tTry again.And do it right.   :)");
        more_desire();
    }
}

void cash()
{
    printf("\n\t\t\t\t\t\t\tCongratulations, You have chosen cash on delivery.\n");
    printf("\t\t\t\t\t\t\tPlease input your name, address\n\t\t\t\t\t\t\tand mobile no. below.\n");
    printf("\n\t\t\t\t\t\t\tWe desire your first name please: ");
    fflush(stdin);
    scanf("%s",&q.fname);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your last name please: ");
    scanf("%s",&q.lname);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your address please: ");
    scanf("%s",&q.add);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your mobile number please: ");
    scanf("%s",&q.mob);
    }




void credit()
{
    printf("\n\t\t\t\t\t\t\tCongratulations, You have Chosen Credit Card Payment.\n");
    printf("\t\t\t\t\t\t\tPlease input your name, address, mobile number and \n\t\t\t\t\t\t\tcredit card number below.\n");
    printf("\n\t\t\t\t\t\t\tWe desire your first name please: ");
    fflush(stdin);
    scanf("%s",&q.fname);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your last name please: ");
    scanf("%s",&q.lname);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your address please: ");
    scanf("%s",&q.add);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your mobile number please: ");
    scanf("%s",&q.mob);
    fflush(stdin);
    printf("\t\t\t\t\t\t\tWe desire your Credit card number please: ");
    scanf("%s",&q.crno);

}

int sum()
{
    s=pizza+chicken+shawarma+pasta+wedges+nachos+wings+lasagna+chowmein+hcoffee+ccoffee+cola+oreo+strawberry+chocomilk;
    return s;
}


void list()
{   system("cls");
    printf("\n\t\t\t\t\t\t\t  Thank you for your desired purchase %s. We hope you enjoy it.\n\t\t\t\t\t\t\t\t Your order will be delivered to you shortly.",q.lname);
    printf("\n\t\t\t\t\t\t\t\t     Visit us again whenever you desire.\n");
    printf("\t\t\t\t\t\t\t\t    Your detailed bill is presented below.\n\n");
    printf("\t\t\t\t\t\t\t\t\t        DDDD       CCCCC\n");
    printf("\t\t\t\t\t\t\t\t\t        DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t        DD   DD  CC\n");
    printf("\t\t\t\t\t\t\t\t\t        DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t        DDDD       CCCCC\n\n");
    printf("\t\t\t\t\t\t\t\t\t   WELCOME TO THE Desire Cafe\n");
    printf("\t\t\t\t\t\t\t\t        Fulfilling your desire for food\n");
    printf("\t\t\t\t\t\t\t\t\t\t   Since 1997.\n\n");
    printf("\t\t\t\t\t\t\tCustomer's name:  %s , %s\n",q.lname,q.fname);
    printf("\t\t\t\t\t\t\tCustomer's mobile number:  %s\n",q.mob);
    printf("\t\t\t\t\t\t\tCustomer's credit card number:  %s\b\b\b\b\b\b*****\n",q.crno);
    printf("\t\t\t\t\t\t_______________________________                 ________________________________\n");
    printf("\t\t\t\t\t\t_______________________________ Bill of Desires ________________________________\n\n");
    printf("\t\t\t\t\t\tItem name\t\t\t Item price\t\tQuantity\t\tAmount\n\n");

    while(pizza1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s1);
        printf("\t\t%d\t\t%d Taka",qpizza,pizza);
        printf("\n");
    break;
    }
    while(chicken1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s2);
        printf("\t\t%d\t\t%d Taka",qchicken,chicken);
        printf("\n");
    break;
    }
    while(shawarma1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s3);
        printf("\t\t%d\t\t%d Taka",qshawarma,shawarma);
        printf("\n");
    break;
    }
    while(pasta1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s4);
        printf("\t\t%d\t\t%d Taka",qpasta,pasta);
        printf("\n");
    break;
    }
    while(wedges1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s5);
        printf("\t\t%d\t\t%d Taka",qwedges,wedges);
        printf("\n");
    break;
    }
    while(nachos1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s6);
        printf("\t\t%d\t\t%d Taka",qnachos,nachos);
        printf("\n");
    break;
    }
    while(wings1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s7);
        printf("\t\t%d\t\t%d Taka",qwings,wings);
        printf("\n");
    break;
    }
    while(lasagna1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s8);
        printf("\t\t%d\t\t%d Taka",qlasagna,lasagna);
        printf("\n");

    break;
    }
    while(chowmein1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",s9);
        printf("\t\t%d\t\t%d Taka",qchowmein,chowmein);
        printf("\n");
    break;
    }
    while(hcoffee1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b1);
        printf("\t\t%d\t\t%d Taka",qhcoffee,hcoffee);
        printf("\n");
    break;
    }
    while(ccoffee1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b2);
        printf("\t\t%d\t\t%d Taka",qccoffee,ccoffee);
        printf("\n");
    break;
    }
    while(cola1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b3);
        printf("\t\t%d\t\t%d Taka",qcola,cola);
        printf("\n");
    break;
    }
    while(oreo1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b4);
        printf("\t\t%d\t\t%d Taka",qoreo,oreo);
        printf("\n");
    break;
    }
    while(strawberry1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b5);
        printf("\t\t%d\t\t%d Taka",qstrawberry,strawberry);
        printf("\n");
    break;
    }
    while(chocomilk1==1)
    {
        printf("\t\t\t\t\t\t");
        printf("%s",b6);
        printf("\t\t%d\t\t%d Taka",qchocomilk,chocomilk);
        printf("\n");
    break;
    }
    printf("\n\t\t\t\t\t\tSub Total= %d Taka",s);
    printf("\n\t\t\t\t\t\tOnce again, thank you for desiring us to quench your desires.");

}
    void menu1()
    {
    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD   DD  CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n\n");
    printf("\t\t\t\t\t\t\t\t\tTHE Desire Cafe\n");
    printf("\t\t\t\t\t\t\t\t     Fulfilling your desire for food\n");
    printf("\t\t\t\t\t\t\t\t\t\tSince 1997.\n\n\n");

    }
    void menu2()
    {
    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD   DD  CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DD  DD   CC\n");
    printf("\t\t\t\t\t\t\t\t\t     DDDD       CCCCC\n\n");
    printf("\t\t\t\t\t\t\t\t\tWELCOME TO THE Desire Cafe\n");
    printf("\t\t\t\t\t\t\t\t     Fulfilling your desire for food\n");
    printf("\t\t\t\t\t\t\t\t\t\tSince 1997.\n\n");

    printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
    printf("\t\t\t\t\t\t\t_______________________ FOOD MENU _______________________\n\n");
    printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
    printf("\t\t\t\t\t\t\t01\t\t");
    for(i=0;s1[i];i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t02\t\t");
    for(i=0;s2[i];i++)
        printf("%c",s2[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t03\t\t");
    for(i=0;s3[i];i++)
        printf("%c",s3[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t04\t\t");
    for(i=0;s4[i];i++)
        printf("%c",s4[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t05\t\t");
    for(i=0;s5[i];i++)
        printf("%c",s5[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t06\t\t");
    for(i=0;s6[i];i++)
        printf("%c",s6[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t07\t\t");
    for(i=0;s7[i];i++)
        printf("%c",s7[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t08\t\t");
    for(i=0;s8[i];i++)
        printf("%c",s8[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t09\t\t");
    for(i=0;s9[i];i++)
        printf("%c",s9[i]);
        printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
    printf("\t\t\t\t\t\t\t_______________________ BEVARAGES _______________________\n\n");
    printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
    printf("\t\t\t\t\t\t\t10\t\t");
    for(i=0;b1[i];i++)
        printf("%c",b1[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t11\t\t");
    for(i=0;b2[i];i++)
        printf("%c",b2[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t12\t\t");
    for(i=0;b3[i];i++)
        printf("%c",b3[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t13\t\t");
    for(i=0;b4[i];i++)
        printf("%c",b4[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t14\t\t");
    for(i=0;b5[i];i++)
        printf("%c",b5[i]);
        printf("\n");
    printf("\t\t\t\t\t\t\t15\t\t");
    for(i=0;b6[i];i++)
        printf("%c",b6[i]);
        printf("\n");

    }

    void splash_screen()
    {
        printf("\n\n\n\n");
        printf("\t\t\t\t\t############                                                                                        \n");
        delay(500);
        printf("\t\t\t\t\t#::::::::::#                                                                                        \n");
        delay(500);
        printf("\t\t\t\t\t#::::::::::#                                                                                        \n");
        delay(500);
        printf("\t\t\t\t\t############                                                                                        \n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##    ## ######    ######  ######                 ######     #####                ######\n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##    ## #::::#    #:::::# #::::#  ####  # #####  #::::#    #:::::#   ##   ###### #::::#\n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##::::## ######    #:::::# ###### #      # #::::# ######    #        #::#  #      ######\n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##::::## ##        #:::::# ##      ####  # #::::# ##        #       #::::# #####  ##    \n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##    ## #####     #:::::# ######      # # #####  ######    #       ###### #      ######\n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##    ## ##        #:::::# ##     #    # # #   #  ##        #:::::# #    # #      ##    \n");
        delay(500);
        printf("\t\t\t\t\t    #::#    ##    ## ######    ######  ######  ####  # #    # ######     #####  #    # #      ######\n");
        delay(500);
        printf("\t\t\t\t\t  ########                                                                                          \n");
        delay(500);
        printf("\t\t\t\t\t\t\t\t\t\t\t     Fulfilling your desire for food\n");
        delay(500);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Since 1997.\n\n\n");
        delay(4000);
        system("cls");

    }
    void delay(unsigned int mseconds)
    {
        clock_t goal = mseconds + clock();
        while (goal > clock());
    }
