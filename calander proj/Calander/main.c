#include <stdio.h>
#include <stdlib.h>

int get_1st_weekday(int year){
 int day;

day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
return day;

}

int main()

{
    system("color 9F");
    int year,month,day,daysinmonth,weekday=0,startingday;
    printf("\nENTERR YOU DESIRED YEAR:");
    scanf("%d",&year);

    char *months[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AGUST","SPETEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    int monthday[]={31,29,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0) ||year%400==0)
         monthday[1]=30;

         startingday=get_1st_weekday(year);
    for(month=0;month<12;month++){
            daysinmonth=monthday[month];
     printf("\n \n--------------------%s-------------------\n \n",months[month]);
     printf("\n   SUN  MON  TUE  WED  THU  FRI  SAT\n");


     for(weekday=0;weekday<startingday;weekday++);
        printf("");
     for(day=1;day<=daysinmonth;day++){
        printf("%5d",day);
        if(++weekday>6){
            printf("\n");
             weekday=0;
            }
            startingday=weekday;

     }





    }




    return 0;
}
