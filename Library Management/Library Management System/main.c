#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct books
{
    int id;
    char bookname[50];
    char authorname[50];
    char date[12];

}b;
struct student
{
    int id;
    char sname[50];
    char sclass[50];
    int sroll;
    char bookname[50];
    char date[12];

}s;

FILE *fp;

int main()
{



    int ch;

    while(1)
    {
        system("cls");
        printf("\t\t\t<== LIBRARY MANAGMENT SYSTEM ==>\n");
        printf("\t\t\t    1. ADD BOOK\n");
        printf("\t\t\t    2. VIEW BOOKS LIST\n");
        printf("\t\t\t    3. REMOVE BOOK\n");
        printf("\t\t\t    4. ISSUE BOOK\n");
        printf("\t\t\t    5. VIEW ISSUED BOOK LIST\n");
        printf("\t\t\t    6. EXIT\n\n");
        printf("\t\t\t   ENTER YOUR CHOICE:\n");
        scanf("%d", &ch);

        switch(ch)
        {
        case 6:
            exit(0);
        case 1:
            addbook();
            break;
        case 2:
            viewBookList();
            break;
        case 3:
            RemoveBook();
            break;
        case 4:
            issueBook();
            break;
        case 5:
            viewIssueBookList();
            break;
        /*case 6:
            Exit(0);
            break;*/
        default:
            printf("\t\t\t   INVALID CHOICE\n");




        }
        printf("\t\t\t PRESS ANY KEY TO CONTINUE....");
        getch();
    }







    return 0;
}


void addbook()
{

    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d",tm.tm_mday,tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(b.date,myDate);


    fp = fopen("Book.txt", "ab");

    printf("\t\t\t   ENTER BOOK ID : ");
    scanf("%d", &b.id);

    printf("\t\t\t   ENTER BOOK NAME : ");
    fflush(stdin);
    gets(b.bookname);


    printf("\t\t\t   ENTER AUTHOR NAME : ");
    fflush(stdin);
    gets(b.authorname);

    printf("\t\t\t   BOOK ADDED SUCCESFULLY\n\n");

    fwrite(&b, sizeof(b), 1 , fp);
    fclose(fp);


}

void viewBookList()
{
    system("cls");
    printf("\t\t\t\t\t\t <== AVAILABLE BOOKS ==> \n\n");
    printf("\t\t\t%-10s %-30s %-20s %s \n\n", "BOOK ID", "BOOK NAME", "AUTHOR", "DATE");

    fp = fopen("book.txt", "rb");

    while(fread(&b, sizeof(b), 1 , fp) == 1)
    {
         printf("\t\t\t%-10d %-30s %-20s %s \n", b.id, b.bookname,b.authorname,b.date);

    }

    fclose(fp);
}
void RemoveBook()
{
    int id, f=0;
    system("cls");
    printf("\t\t\t\t\t\t <== REMOVE BOOKS ==> \n\n");
    printf("\t\t\t   ENTER ID TO REMOVE BOOK : ");
    scanf("%d", &id);

    FILE *ft;
    fp = fopen("book.txt", "rb");
    ft = fopen("tmp.txt", "wb");

    while(fread(&b, sizeof(b), 1,fp) == 1)
    {
        if(id == b.id)
        {
            f = 1;
        }
        else
        {
            fwrite(&b, sizeof(b), 1,fp);
        }
    }
    if (f == 1)
    {
        printf("\t\t\t\t\t\t BOOK DELETED SUCCESSFULLY\n\n");
    }
    else
    {
        printf("\t\t\t\t\t NO BOOK FOUND\n");
    }
    fclose(fp);
    fclose(ft);

    remove("book.txt");

    rename("tmp.txt", "book.txt");
}

void issueBook()
{
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d",tm.tm_mday,tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(s.date,myDate);

    int f = 0;
    system("cls");
    printf("\t\t\t\t\t\t <== ISSUE BOOK ==> \n\n");
    printf("\t\t\t\t\t ENTER BOOK ID TO ISSUE :");
    scanf("%d", &s.id);

    //CHECK IF WE HAVE BOOK OF GIVEN ID

    fp = fopen("book.txt", "rb");


    while(fread(&b, sizeof(b), 1, fp) == 1)
    {
        if(b.id == s.id)
        {
            strcpy(s.bookname,b.bookname);
            f = 1;
            break;
        }
    }

    if(f==0)
    {
        printf("\t\t\t\t\t NO BOOK FOUND WITH THIS ID\n");
        printf("\t\t\t\t\t PLEASE TRY AGAIN...\n\n");
        return;
    }

    fp = fopen("issue.txt", "ab");
    printf("\t\t\t\t\t ENTER STUDENT NAME : ");
    fflush(stdin);
    gets(s.sname);

    printf("\t\t\t\t\t ENTER STUDENT CLASS: ");
    fflush(stdin);
    gets(s.sclass);

    printf("\t\t\t\t\t ENTER STUDENT ROLL: ");
    scanf("%d", &s.sroll);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

}

void viewIssueBookList()
{
    system("cls");
    printf("\t\t\t\t\t\t <== ISSUED BOOK LIST ==> \n\n");
    printf("\t\t%-10s %-30s %-20s %-10s %-30s %s \n\n", "S.ID", "NMAE","CLASS","ROLL NO","BOOK NAME", "DATE");

    fp = fopen("issue.txt", "rb");

    while(fread(&s, sizeof(s), 1 , fp) == 1)
    {
         printf("\t\t%-10d %-30s %-20s %-10d %-30s %s \n\n", s.id, s.sname, s.sclass,s.sroll, s.bookname, s.date);

    }

    fclose(fp);

}
//void Exit()
//{
  //  printf("\t\t\t EXIT");
//}
