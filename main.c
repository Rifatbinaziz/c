#include <stdio.h>

float intocm(float *x) //inch to centimeter
{
    *x=*x*2.54;
    return (*x);
}

float cmtoin(float *x) //centimeter to inch
{
    *x=*x*0.393701;
    return(*x);
}

float fttom(float *x) //foot to meter
{
    *x=*x*0.3048;
    return(*x);
}

float mtoft(float *x) //meter to foot
{
    *x=*x*3.28084;
    return(*x);
}

float ydtom(float *x) //yard to meter
{
    *x=*x*0.9144;
    return(*x);
}

float mtoyd(float *x) //meter to yard
{
    *x=*x*1.09361;
    return(*x);
}

float mitokm(float *x) //mile to kilometer
{
    *x=*x*1.60934;
    return(*x);
}

float kmtomi(float *x) //kilometer to mile
{
    *x=*x*0.621371;
    return(*x);
}

float ftoc(float *x) //fahrenheit to celsius
{
    *x=(*x-32)*5/9;
    return(*x);
}

float ctof(float *x) //celsius to fahrenheit
{
    *x=(*x*9/5)+32;
    return(*x);
}

float jtocal(float *x) //joule to calorie
{
    *x=*x*0.23890;
    return(*x);
}

float caltoj(float *x) //calorie to joule
{
    *x=*x*4.1858;
    return(*x);
}

float custom(float *x,float *y) //custom (user inputed relation)
{
    float a;
    a=(*x)*(*y);
    return a;
}




int main()
{
    int choice;
    float a,b,l;
    char decision='y';

    printf("\t\t\tWelcome to Basic Unit Converter\n*******************************************************************************\n");\

    while(decision=='y' || decision=='Y')
{
    printf("\nPlease input the number of unit conversions you want to convert:-\n\n");
    printf("1.Inch to Centimeter\t\t2.Centimeter to Inch\n3.Foot to Meter\t\t\t4.Meter to Foot\n5.Yard to Meter\t\t\t6.Meter to Yard\n");
    printf("7.Mile to Kilometer\t\t8.Kilometer to Mile\n9.Fahrenheit to Celsius\t\t10.Celsius to Fahrenheit\n11.Joule to Calorie\t\t12.Calorie to Joule\n13.Custom\n");
    printf("\n\nYour choice:- ");
    scanf("%d",&choice);

    switch(choice)
{
        case 1:
        printf("\nPlease input value to convert from Inch to Centimeter:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Inch is equal to %f Centimeter\n\n|=============================================================================|",b,intocm(&a));
        break;

        case 2:
        printf("Please input value to convert from Centimeter to Inch:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Centimeter is equal to %f Inch\n\n|=============================================================================|",b,cmtoin(&a));
        break;

        case 3:
        printf("Please input value to convert from Foot to Meter:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Foot is equal to %f Meter\n\n|=============================================================================|",b,fttom(&a));
        break;

        case 4:
        printf("Please input value to convert from Meter to Foot:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Meter is equal to %f Foot\n\n|=============================================================================|",b,mtoft(&a));
        break;

        case 5:
        printf("Please input value to convert from Yard to Meter:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Yard is equal to %f Meter\n\n|=============================================================================|",b,ydtom(&a));
        break;

        case 6:
        printf("Please input value to convert from Meter to Yard:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Meter is equal to %f Yard\n\n|=============================================================================|",b,mtoyd(&a));
        break;

        case 7:
        printf("Please input value to convert from Mile to Kilometer:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Mile is equal to %f Kilometer\n\n|=============================================================================|",b,mitokm(&a));
        break;


        case 8:
        printf("Please input value to convert from Kilometer to Mile:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Kilometer is equal to %f Mile\n\n|=============================================================================|",b,kmtomi(&a));
        break;

        case 9:
        printf("Please input value to convert from Fahrenheit to Celsius:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Fahrenheit is equal to %f Celsius\n\n|=============================================================================|",b,ftoc(&a));
        break;

        case 10:
        printf("Please input value to convert from Celsius to Fahrenheit:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Celsius is equal to %f Fahrenheit\n\n|=============================================================================|",b,ctof(&a));
        break;

        case 11:
        printf("Please input value to convert from Joule to Calorie:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Joule is equal to %f Calorie\n\n|=============================================================================|",b,jtocal(&a));
        break;

        case 12:
        printf("Please input value to convert from Calorie to Joule:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f Calorie is equal to %f Joule\n\n|=============================================================================|",b,caltoj(&a));
        break;

        case 13:
        printf("Please input relation:\tx=y*");
        scanf("%f",&l);
        printf("Please input x value:");
        scanf("%f",&a);
        b=a;
        printf("\a\n|=============================================================================|\n\n\t\t%f x is equal to %f y\n\n|=============================================================================|",b,custom(&a,&l));
        break;

        default:
            printf("Wrong input.Please try again");
            break;
}

     printf("\n\n\n-------------------------------------------------------------------------------\nThanks for using Basic Unit Converter.Would you like to use the program again?\ny/n \n");
     scanf(" %ch",&decision);
}
     printf("\nProgram is ending......................");
     return 0;
}








































