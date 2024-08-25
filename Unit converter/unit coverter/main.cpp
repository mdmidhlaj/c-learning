#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float c,f;


    printf("ENTER THE TEMPERATUR IN FARENHEIT SCALE : ");
    scanf("%f",&f);
    c = (f -32)* 5/9;
    printf("\n THE TEMPERATURE IN CELCIUS : %f",c);

    printf("\nENTER THE TEMPERATUR IN THE CELCIUS SCALE :\n");
    scanf("%f", &c);
    f = c * 9/5 + 32;
    printf("\n THE TEMPERATURE IN FARENHEIT IS : %f \n", f);

    //metere to feet

    float m,g;



    printf("\nGIVE LENGTH IN METER : ");
    scanf("%f",&m);

    g = 3.28 *m;

    printf("THE DISTANCE IN FEET IS : %f",g);

    return 0;
}
