//Program to ourput volume and surface area of a cylinder 
/*
Name:Given Abuya 
Reg no:PA106/G/28830/25
Description 
*/

#include<stdio.h>
int main(){

float pi=3.142;
float radius,height,volume,surface_area;

//prompt user to enter radius
printf("Enter radius");
scanf("%f",&radius);

//prompt user to enter height
printf("Enter height");
scanf("%f",&height);

//calculation of the volume and surface area
volume= pi*radius*radius*height ;
surface_area= 2*pi*radius*radius+2*pi*radius*height;

//display volume and surface_area
printf("\n volume is %f",volume);
printf("\n surface_area is %f",surface_area);

return 0;
}