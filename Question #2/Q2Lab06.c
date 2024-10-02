/* Q2Lab06
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: Write a program that calculates the sum of all even numbers between two given integers a and b. Use
a loop to find the sum and print the result.*/

#include <stdio.h>

int main()
{
	int a, b;
	int i=0;
	int n=0;
	int sum=0;
	
	printf("Enter value of num1: ");
	scanf("%d", &a);
	printf("Enter value of num2: ");
	scanf("%d", &b);
	
	if (a>b) {
	i = a;	
	a = b;
	b = i;
    	}//end if 

	for (n=a; n<=b; n = n+2) {
        
	if (n%2 == 0) {
		sum =sum + n;
		}//end if
	}//end for
	
	printf("%d",sum);
	return 0;
	
	
}//end main