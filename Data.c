//C program to display mobile data purchase menu
/*
Name:Given Abuya
Reg no:PA106/G/28830/25
Description:Mobile Data Purchase Menu
*/

#include<stdio.h> 
int main (){
 int  choice;
 printf("choose your bundle:\n");
 printf("1. 100MB\n");
 printf("2. 500MB\n");
 printf("3. 1GB\n");
 printf("4. 2GB\n");

//Prompt the user to enter	choice 
printf("Enter choice 1-4\n");
scanf("%d",&choice);

switch(choice){
	case 1:
		printf("1: 100MB cost: 50 KES");
		break;
	case 2:
		printf("2. 500MB cost: 200 KES");
		break;
	case 3:
		printf("3: 1GB cost: 350 KES");
		break;
	case 4:
		printf("4: 2GB cost: 600 KES");
		break;
	default:
		printf("invalid choice");
		
}
return 0;
}