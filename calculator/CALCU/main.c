#include<stdio.h>
#include<stdlib.h>

void response(char);

int main(){
    system("color 9F");

double n1,n2;
char opsel;
char response =' ';


int y=2;





    response = ' ';
    printf("ENTER YOUR FIRST NUMBER:");
scanf("%lf", &n1);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%lf", &n2);
printf("SELECT YOU OPERATION :+,-,/,*: \n ");

scanf(" %c", &opsel);

if(opsel =='+'){
    printf("%lf + %lf = %lf", n1, n2,n1+n2);
}else if(opsel =='-'){
printf("%lf - %lf = %lf", n1, n2,n1-n2);
}
else if(opsel =='/'){
printf("%lf / %lf = %lf", n1, n2,n1/n2);
}
else if(opsel =='*'){
printf("%lf * %lf = %lf", n1, n2,n1*n2);
}else{
printf("\nINVALID FUNCTION\n");
}
printf("\nThanks for using");




//printf("%f + %f");
//scanf("%d");
//printf("+,/,%,*,-");

return 0;
}
