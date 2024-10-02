/* Q1 
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: Which loop system would be better for user input. Justify your answer by creating a program that
takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.
*/

#include<stdio.h>

int LoopZero(void){
	int n;
	int sum=0;
	int count=0;
	printf("\nEnter number to sum: ");	
	scanf("%d",&n);
	sum = sum+n;
	count = count+1;
	printf("Addition counter: %d",count);

	for(n>0;;sum=sum+n){
	printf("\nNow the sum is: %d",sum);
	printf("\n\nEnter number to sum: ");	
	scanf("%d",&n);
		if(n==0){
			printf("\nTotal operations performed: %d", count);
			printf("\nExited.");
			
			break;
		}//end if

	count++;
	printf("Addition counter: %d",count);
	
	}//end for

}//end LoopZero function

int main(){
	LoopZero();
}//end main function