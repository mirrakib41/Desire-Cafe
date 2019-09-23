//***************************************************************
//                   HEADER FILE USED IN PROJECT
//***************************************************************
#include<stdio.h>
#include<conio.h>
#include<string.h>

//***************************************************************
//                           functions
//****************************************************************


void add_Student ();
void Search_Student_Record();
void Renew_Student_Record();
void list();


//***************************************************************
//                   STURUCTURE USED IN PROJECT
//****************************************************************

struct student{
    int ID_no;
    char fname[20];
    char mname[20];
    char lname[20];
    char ftname[30];
    char add[70];
    char moname[30];
    char course_year[20];
    int semester_no;
    char bdate[20];
    char Scontnum[20];
    char course_take[100];
    char mark[20];

};
struct student e;



void main()
{  system ("COLOR 0C");
 printf("\t\t\t    STUDENT RECORD SYSTEM");
 printf("\n\t\t\tCOMPUTER SCIENCE AND ENGINEERING  ");
  printf("\n\t\t  >>>NORTH SOUTH UNIVERSITY,DHAKA,BANGLADESH<<<");
int a;
char ch;

do{

printf("\n\t\t    ======================================");
printf("\n\t\t    |              CHOICES:              |");
printf("\n\t\t    |                                    |");
printf("\n\t\t    |  [1] Add Student                   |");
printf("\n\t\t    |  [2] Search Student Record         |");
printf("\n\t\t    |  [3] Renew Student Record          |");
printf("\n\t\t    |  [4] Student list                  |");
printf("\n\t\t    ======================================");
printf("\n\t\t    Enter Your Choice:");

scanf("%d",&a);
switch(a)
{
case 1:
add_Student ();
break;
case 2:
Search_Student_Record();
break;
case 3:
Renew_Student_Record();
break;
case 4:
list();
break;



default :
printf("Invalid Choice!");
}
printf("\n More Actions ? (Y/N) :");
fflush(stdin);
scanf("%c", &ch);
}while(ch=='y'|| ch=='Y');
}


//***************************************************************
//        function to write in file <<ad student>>
//****************************************************************


void add_Student()
{
int i,n;
struct student e;
FILE *fp;
fp=fopen("student.dat", "a");
if(fp==NULL)
{
printf("File Creation Failed!");
exit(0);
}


printf("Enter the student ID Number : ");
scanf("%d", &e.ID_no);
printf("Enter the student First Name : ");
fflush(stdin);
gets(e.fname);
printf("Enter the student Middle Name : ");
fflush(stdin);
gets(e.mname);
printf("Enter the student Last Name : ");
fflush(stdin);
gets(e.lname);
printf("Enter the student Address : ");
fflush(stdin);
gets(e.add);
printf("Enter the student Father's Name : ");
fflush(stdin);
gets(e.ftname);
printf("Enter the student Mother's Name : ");
fflush(stdin);
gets(e.moname);
printf("Enter the student Course and year: ");
fflush(stdin);
gets(e.course_year);
printf("Enter the student Semester No : ");
scanf("%d", &e.semester_no);
printf("Enter the student Birth date : ");
fflush(stdin);
gets(e.bdate);
printf("Enter the student Contact Number : ");
fflush(stdin);
gets(e.Scontnum);
printf("Enter student Course Taken : ");
fflush(stdin);
gets(e.mark);
printf("Enter the student obtain mark : ");
fflush(stdin);
gets(e.mark);
printf("\n\n");
fwrite((char *)&e, sizeof(e), 1, fp);

fclose(fp);

}


//***************************************************************
//        function to read specific record from file
//****************************************************************

void Search_Student_Record()
{
int s,recno;
char sname[20];
struct student e;
FILE *fp;
fp=fopen("student.dat", "rb");
       printf("\n\t\t    ======================================");
       printf("\n\t\t    |                MENU:               |");
       printf("\n\t\t    |                                    |");
       printf("\n\t\t    |  [1] Search by Last Name           |");
       printf("\n\t\t    |  [2] Search by student ID_No       |");
       printf("\n\t\t    ======================================");
       printf("\n\t\t    Enter Your Choice:");

scanf("%d", &s);
switch(s)
{
case 1:
printf("Enter the student Last Name to Search : ");
fflush(stdin);
gets(sname);
while((fread((char *)&e, sizeof(e), 1, fp))==1)
{
if(strcmp(sname,e.lname)==0)
{
printf("\nEnter the student ID Number : %d", e.ID_no);
printf("\nEnter the student First Name : %s",e.fname);
printf("\nEnter the student Middle Name : %s",e.mname);
printf("\nEnter the student Last Name : %s",e.lname);
printf("\nEnter the student Address : %s",e.add);
printf("\nEnter the student Father's Name : %s",e.ftname);
printf("\nEnter the student Mother's Name : %s",e.moname);
printf("\nEnter the student Course and year : %s",e.course_year);
printf("\nEnter the student Semester No : %d", e.semester_no);
printf("\nEnter the student Birth date: %s",e.bdate);
printf("\nEnter the student Contact Number  : %s",e.Scontnum);
printf("\nEnter student Course Taken: %s",e.course_take);
printf("\nEnter the student  obtain mark: %s",e.mark);
printf("\n\n\n");
}
}
break;



case 2:
printf("Enter the student ID Number to Search : ");
scanf("%d", &recno);
while((fread((char *)&e, sizeof(e), 1, fp))==1)
{
if(e.ID_no==recno)
{
printf("\nEnter the student ID Number : %d", e.ID_no);
printf("\nEnter the student First Name : %s",e.fname);
printf("\nEnter the student Middle Name : %s",e.mname);
printf("\nEnter the student Last Name : %s",e.lname);
printf("\nEnter the student Address : %s",e.add);
printf("\nEnter the student Father's Name : %s",e.ftname);
printf("\nEnter the student Mother's Name : %s",e.moname);
printf("\nEnter the student Course and year : %s",e.course_year);
printf("\nEnter the student Semester No : %d", e.semester_no);
printf("\nEnter the student Birth date: %s",e.bdate);
printf("\nEnter the student Contact Number  : %s",e.Scontnum);
printf("\nEnter student Course Taken: %s",e.course_take);
printf("\nEnter the student  obtain mark: %s",e.mark);
printf("\n\n\n");
}
}
break;
}
}


//***************************************************************
//        function to Renew_Student_Record
//****************************************************************


void Renew_Student_Record()
{
int recno, nofrec=0;
char ch;
struct student e;
FILE *fp;
fp=fopen("student.dat", "rb+");
printf("Enter the student ID Number to modify : ");
scanf("%d", &recno);
while((fread((char *)&e, sizeof(e), 1, fp))==1)
{
nofrec++;
if(e.ID_no==recno)
{
printf("\nEnter the student ID Number : %d", e.ID_no);
printf("\nEnter the student First Name : %s",e.fname);
printf("\nEnter the student Middle Name : %s",e.mname);
printf("\nEnter the student Last Name : %s",e.lname);
printf("\nEnter the student Address : %s",e.add);
printf("\nEnter the student Father's Name : %s",e.ftname);
printf("\nEnter the student Mother's Name : %s",e.moname);
printf("\nEnter the student Course and year : %s",e.course_year);
printf("\nEnter the student Semester No : %d", e.semester_no);
printf("\nEnter the student Birth date: %s",e.bdate);
printf("\nEnter the student Contact Number  : %s",e.Scontnum);
printf("\nEnter student Course Taken: %s",e.course_take);
printf("\nEnter the student  obtain mark: %s",e.mark);
printf("\n\n\n");
printf("\t\t\tDo you want to modify this record : ? (Y/N)");
fflush(stdin);
scanf("%c", &ch);
fseek(fp, ((nofrec-1)*sizeof(e)), 0);
if(ch=='Y'|| ch=='y')
{
printf("Enter the student ID Number : ");
scanf("%d", &e.ID_no);
printf("Enter the student First Name : ");
fflush(stdin);
gets(e.fname);
printf("Enter the student Middle Name : ");
fflush(stdin);
gets(e.mname);
printf("Enter the student Last Name : ");
fflush(stdin);
gets(e.lname);
printf("Enter the student Address : ");
fflush(stdin);
gets(e.add);
printf("Enter the student Father's Name : ");
fflush(stdin);
gets(e.ftname);
printf("Enter the student Mother's Name : ");
fflush(stdin);
gets(e.moname);
printf("Enter the student Course and year: ");
fflush(stdin);
gets(e.course_year);
printf("Enter the student Semester No : ");
scanf("%d", &e.semester_no);
printf("Enter the student Birth date : ");
fflush(stdin);
gets(e.bdate);
printf("Enter the student Contact Number : ");
fflush(stdin);
gets(e.Scontnum);
printf("Enter student Course Taken : ");
fflush(stdin);
gets(e.mark);
printf("Enter the student obtain mark : ");
fflush(stdin);
gets(e.mark);
fwrite((char *)&e, sizeof(e), 1, fp);
printf("Record Modified");
}
else
printf("No modifications were made\n\n");
fclose(fp);
}
}
}


//***************************************************************
//        function to list of file
//****************************************************************


void list()
{
int nofrec=0;
struct student e;
FILE *fp;
fp=fopen("student.dat", "rb");
if(fp==NULL)
{
printf("\n\n\tFile doesn’t exist!!! TRY AGAIN");
exit(0);
}
while((fread((char *)&e, sizeof(e), 1, fp))==1)
{
nofrec++;
printf("\nEnter the student ID Number : %d", e.ID_no);
printf("\nEnter the student First Name : %s",e.fname);
printf("\nEnter the student Middle Name : %s",e.mname);
printf("\nEnter the student Last Name : %s",e.lname);
printf("\nEnter the student Address : %s",e.add);
printf("\nEnter the student Father's Name : %s",e.ftname);
printf("\nEnter the student Mother's Name : %s",e.moname);
printf("\nEnter the student Course and year : %s",e.course_year);
printf("\nEnter the student Semester No : %d", e.semester_no);
printf("\nEnter the student Birth date: %s",e.bdate);
printf("\nEnter the student Contact Number  : %s",e.Scontnum);
printf("\nEnter student Course Taken: %s",e.course_take);
printf("\nEnter the student  obtain mark: %s",e.mark);

printf("\n\n\n");
}
printf("\n\n\t\t  Total number of records present are : %d\n\n", nofrec);
fclose(fp);
}










