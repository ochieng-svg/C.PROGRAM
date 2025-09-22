//volume of a cylinder 
//single line comment 
/*
Name:Vict Baraka 
Reg no:PA106/G/28775/25
Description:Promptthe user to enter radius and height 
*/
#include<stdio.h>

int main()
{
//variable declaration 
float radius,volume,height,surfacearea;
const float PI=3.142;

//prompt user to enter radius and height 
printf("enter the radius of the cylinder");
scanf("%f",radius);

printf("enter the height of the cylinder");
scanf("%f",&height);

//to find volume of a cylinder 
volume =PI*radius*radius*height;

//to find surface area of a cylinder 
surfacearea=2*PI*radius*(radius +height );

//results 
printf("volume of the cylinder:%.2f",volume);
printf("surfacearea of the cylinder:%.2f",surfacearea);
    return 0;
    }