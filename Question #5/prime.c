/* Q5
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: Write a program to check whether a given number is prime or not.
*/

#include<stdio.h>

int main(){
	int n;
	int i=2;
	printf("Enter number to identify if it is prime(n>1): ");  //n is an integer greater than 2
	scanf("%d",&n);
	int count=0;
	if(n==2){
		printf("\n\tNumber is prime. \n");
	}//end if 1
	else{
		while(i<n){
			
			if(n%i==0){
				count++;
				printf("\nDivisor %d: %d\n",count,i);
						
			}//end if
			i++;
		}//end while
		if(count>=1){
			printf("\n\tNumber is not prime. \n");
		}//end if inner 1	
		else
		{
			printf("\n\tNumber is prime. \n");
		}//end else inner 1
		

	}//end else 1	
	
	return 0;
	
}//end main function