#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct patient{
char name [10];
int age;
float height;
*/


/*void sayme( char name[]){
 printf("HELLO %s \n", name);
}*//*
void findsquare(int num){
int result;
result = num*num;
printf("square of %d is %d \n" ,num,result);
*/
/*int sum(){
int result = 10+20;
printf("RESULT SHOWED ME \n");
return result;
printf("result not showed me");
}*/
/*int findcube(int num){
int result =num*num*num;
return result;
}*/




/*
HI GOOYS
*/

int main()
{

   /* printf(" *     \n");
    printf("  *      \n");
    printf("   *     \n");
    printf("    *      \n");
    printf("     *     \n");
    printf("      *      \n");
    printf("       *     \n");
    printf("        *      \n");
    printf(" hello earth,,\n");
    printf(" hello earth,,");// this is print function*/
   /* printf("HELLO WORLD\n");
    printf("%d\n", 12);
    printf("%f\n", 12.50);
    printf("%c\n" ,'c');
    printf("%s\n","HELLO WORLD" );*/

    /*char patientName[] ="LM";
    int age = 36;
    double height = 1.55;

    printf("player name is %s\n", patientName);
    printf("HE IS %d YEARSOLD GUY\n", age);
    printf("%s IS THE BEST PLAYER IN CURRENT WORLD FOOBALL HISTORY\n", patientName);
    printf("HIS HEIGHT IS %f CM\n", height);*/

/*char player[12];
    int age = 36;
    double height = 1.55;

    printf("player name:");
    scanf("%s, player name");

    printf("player's Age:");
    scanf("%d,&Age");

    printf("Player's Height:");
    scanf("%f, height");


    printf("player name is %s\n", player);
    printf("HE IS %d YEARSOLD GUY\n", age);

    printf("HIS HEIGHT IS %fCM \n", height);*/
    //int num1,num2;

    //printf("ENTER THE NUMBER1: ");
    //scanf("%d", &num1);

    //printf("ENTER THE NUMBER2: ");
    //scanf("%d", &num2);
    //printf("THE ANSWER is %d", num1*num2);

    //int num1;
    //printf("ENTER YOUR NUMBER: ");
    //scanf("%d", &num1);

    //if(num1>20){
      //  printf("Number is greater than 20\n");
    //}else if(num1>10) {
      //  printf("Number between 10 and 20\n");

    //}else if(num1>0){
    //printf("Number is between 0 and 10 \n");
    //}else if(num1==0){
      // printf("IT is zero \n");
    //}else{
     //   printf("Number is negative \n");
    //}



    /*int num1, num2 ;
    printf("ENTER TO NUMBER: \n");
    scanf("%d %d", &num1, &num2);

    if(num1>=num2){
        if(num1 == num2){
            printf("NUMBER 1 = NUMBER 2 \n");
        }else{
            printf("NUMBER 1 is greater than NUMBER 2 \n");
        }
    }else{
    printf("Number 1 is less than number 2 \n");
         }*/

        /* double n1,n2;
         char opselector;
         printf("Enter your first number: ");
         scanf("%lf", &n1);
         printf("Enter your second number: ");
         scanf("%lf", &n2);

         printf("selcetyour operation: +,-,*,/: ");
         scanf(" %c", &opselector);
         if (opselector == '+'){
         printf("%lf + %lf = %lf",n1,n2,n1+n2);
         }else if(opselector == '-'){
             printf("\n%lf - %lf = %lf",n1,n2,n1-n2);
         }else if(opselector =='*'){
             printf("\n%lf * %lf = %lf",n1,n2,n1*n2);
         }else if(opselector =='/'){
             printf("\n%lf / %lf = %lf",n1,n2,n1/n2);
         }else{
         printf("UNKNOWN ID CORECT IT AND TRY AGAIN ");
         }*/
        /* int n;

         for(n=1; n<11000; n++){
            printf("%d\n", n);
         }*/

         /*int n;
         while(n<=10){
            // printf("%d \n" , n);
             printf("HELLO WORLD \n");
             printf("HI GOOY \n");
             n++;

         }*/


        /* int n=1;
         do{
            printf("%d\n",n);

            n++;
         }while(n<=20000);*/

         /*int number [12] = {5,10,15,20,25,30,35,40,45,50,55,60};
         printf("ENTER 10 NUMBERS:\n");

         for (int i=0; i<5; i++){
            scanf("%d", &number[i]);
         }
         int sum=0;
         for(int i=0; i<5; i++){
            sum += number[i];
         }
         printf("\n total sum = %d", sum);*/


        /*int number[7] = {5,10,15,25,30,35,40};
        printf(" \n% d", number[1]);

        number[1] = 100;
        printf("\n %d", number[1]);*/

        /*int number[3][5] = {{10,20,30,40,50},
                           {11,21,31,41,51},
                           {5,10,15,20,25}};
        int sum = number[0][4]+number[2][0];

        printf("%d", sum);*/


        /*sayme("john");
        sayme("MISHA MADAVI");
        sayme("THRUMB");
        sayme("KALi");*/


        /*int number;

        printf("ENTERR ANUMBER TO FIND SQUARE: ");
        scanf("%d", &number);
        findsquare(number);

        findsquare(2);*/
        /*int a =sum();
        printf("%d",a);*/

        /*int number;
        printf("Enter a number to find square:\n");
        scanf("%d", &number);

        printf("answe is %d", findcube(number));*/

        /*char s1[10] ="HELLO";
         strrev(s1);
         printf("%s \n",s1);*/

         /*int a=10,b=20,c;
         int *x,*y,*z;
         x=&a;
         y=&b;
         z=&c;
         *z=*x+*y;
         printf("sum is %d \n",c);*/


         /*struct patient p[5];
         for(int i=0; i<5; i++){
         printf("patient name:");
         scanf("%s", p[i].name);
         printf("patient AGE:");
         scanf("%d", &p[i].age);
         printf("patient height:");
         scanf("%f", &p[i].height);
         }


         for(int i=0; i<5; i++){
         printf("patient Name: %s \n", p[i].name);
         printf("patient Age: %d \n", p[i].age);
         printf("patient Height: %f \n", p[i].height);
         }*/

        /* FILE *fp;
         fp =fopen("sample.txt", "a");
         fprintf(fp,"LEARN C with python PROGRAMMING\n");


         fclose(fp);*/

        /* char name [10],result[10];
         int mark;
         FILE *fp;
         fp =fopen("student id.txt", "a");

         printf("ENTER NAME : Mark: Result:");
         scanf("%s %d %s",name,&mark,result);

         fprintf(fp,"%s \t %d\t %s \n", name, mark,result);

         fclose(fp);*/
         char name[10],result[10];
         int mark;

          FILE *fp;
          fp =fopen("SAMPLE PLUS.txt", "r");

          fscanf(fp,"%s %d %s",name, &mark, result);
          while( fscanf(fp,"%s %d %s",name, &mark, result)!=EOF){
             printf("%s \t %d \t %s \n", name, mark, result);

          }

          printf("%s \t %d \t %s \n", name, mark, result);


          fclose(fp);
























    return 0;
}
