/*
Name :Given Abuya 
Reg No : PA106/G/28830/25
Description : Aprogram invovling weekly revenue
Date : 20. Oct ,2025
*/

#include <stdio.h>
int main(){
	int revenue[7];
	float total=0,average;
    int i;
    
printf("Revenue tracker \n");	
	for( i=0;i<7;i++){
		printf("Enter Revenue for day %d: ",i+1);
		scanf("%d",&revenue[i]);
		total+=revenue[i];
	}
	
average=total/7;
printf("Total Weekly Revenue=%.2f\n",total);
printf("Average daily Revenue=%.2f\n",average);	
		
	return 0;
}