/*Q6
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: Using the above program integrate the number if it is a prime and print the Fibonacci series till that
number.
Example
Input: 5 Output:
Number is prime
Series is = 0 1 1 2 3
*/

#include <stdio.h>

int main(void) {
	int n, tvar;   //tvar = temporary variable
	int run = 1; 
	int j = 0; 
	int k = 1;  
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(n<2){
	run = 0; 
	}//end if 1 
	
	else {
	for (int i=2; i*i<=n; i++) {
		if(n%i == 0){
			run=0; 
			break;
			}//end if inner 1
		}//end for loop 1
	}//end else 1

	if (run) {
	printf("Number is prime\n");
	
	printf("Series: ");
	while (j <= n) {
		printf("%d ", j);
		tvar = j+k; 
		j = k;        
		k = tvar;   
	}//end while loop 1
	printf("\n");
	}//end if 2 
	else 
	{
	printf("Number is not prime\n");		
	}//end else 2

    return 0;
}//end main function
