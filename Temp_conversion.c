/*
Name : Given Abuya
Reg NO : PA106/28830/25
Description : A programme of temperature conversertions 
Date : 20.Oct ,2025
*/

#include<stdio.h>

//function prototype
float convertToCelsius(float fahrenheit){
	float celsius=(fahrenheit -32)*5/9;
	
	return celsius; 
}


int main (){
	float fahrenheit;
//prompt user to enter temperature in fahrenheit 
printf("Enter temperature in fahrenheit :  ");
scanf("%f",&fahrenheit);	

//display temperature in celsius 
printf("Temperature in celsius =%2f°c",convertToCelsius(fahrenheit));

return 0;
}

