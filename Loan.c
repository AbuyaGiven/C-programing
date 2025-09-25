// C program to implement loan requirements 
/*
Name:Given Abuya 
reg no:PA106/G/28830/25
Description:About bank loan
*/

#include<stdio.h>
int main(){
int age ;
double income ;

//prompt user inputs
printf("Enter you age:");
scanf("%d",age );
printf("Enter your annual income(in sh):");
scanf("%if",income);

//Check for loan qualifications 
If ("age>=21&&income>= 21000");{
printf("Congratulations your qualify for loan \n");
}
else{
printf("Unfortunately,we are unable to offer you a loan at this time\n");
}
return 0 ;
}