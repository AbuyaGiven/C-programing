//C program to check for student Exam Eligibility
/*
Name:Given Abuya 
Reg No:PA106/G/28830/25
Description:Exam Eligibility
*/

#include<stdio.h>
int main(){   //Main function
	int attendance , average_marks ;

//Prompt user to Enter
printf("Enter attendance:");
scanf("%d",&attendance);

printf("Enter average_marks:");		
scanf("%d",&average_marks);

//Display if Eligibility if conditions are met
if (attendance>= 75 && average_marks>=40){
	printf("You are eligible for exams");
}
 else{
printf("You are not eligible");
 } 

return 0 ;
}