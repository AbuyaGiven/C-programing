//C program to display water bills
/*
Name:Given Abuya 
Reg No:PA106/G/28830/25
Description:Water Bills
*/

#include<stdio.h>
int main(){
	int units ;
	float bill;
	
//prompt user to enter 
printf("Enter water units consumed");
scanf("%d",&units);

//calculation of water bill
if(units<=30) {
	bill= units*20;
}
else if(units<=60) {
	bill=(30 * 20) +(units-30)*25;
	
}
else  {
	bill=(30 *20)+(30*25)+(units-60)*30;
}
//output display bill in  2 decimal places
printf("total water bill=Kes %.2f\n",bill);	
			
return 0;	
}