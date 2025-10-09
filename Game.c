//C programm to display a number guessing game 
/*
Name:Given Abuya
Reg No:PA106/G/28830/25
Description:Number Guessing Game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	int secret, guess, attempts=0;
	srand(time(0));
	secret =rand()%20+1;
	
printf("Welcome To Guessing game!!\n");

while(1){
	printf("Enter your guess (1-20):" );
	scanf("%d",&guess);
	attempts++;
	
if(guess>secret)	       
	printf("too high!\n");
else if(guess<secret)
	printf("too low!\n");
else{ 
	printf("Congratulations! You guessed it in %d attempts.\n",attempts);
	break;
}

}	
return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	