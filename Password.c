//C programm to prompt use to enter password 
/*
Name:Given Abuya
Reg No:PA106/G/28830/25
Description:Password user prompt
*/

#include<stdio.h>
int main()
{
//main function
	int password;
do{
	printf("Enter password:");
	scanf("%d",&password);
}while (password!=1234);
 printf("Access Granted\n");
	 

	return 0 ;
} 	 