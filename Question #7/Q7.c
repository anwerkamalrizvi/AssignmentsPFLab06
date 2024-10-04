/*Q6
*NAME: SYED ANWER
*SECTION: BAI-1A
*ROLL NO: 24K-0033
*QUESTION: Write a program to check whether a number is an Armstrong number or not. An Armstrong number is
a number that is equal to the sum of cubes of its digits.
*/

#include<stdio.h>

int main(){
	int i, n;
	i=0;
	int k=0;
	int s=0;
	int add=0;
	printf("Enter any integer(limit < 1 x 10^8): ");
	scanf("%d",&n);
	int temp=1000;
	if(n>0&&n<10){
			k=n;
			printf("%d is an Armstrong number." , k);
			}//end if
	if(n>9&&n<100){
		k=n;
		while(n>9){
			
			
			s=k%10;
			k=k/10;	
			i=i+s;
				i=i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if
		
		}//end while	
	}//end if
		
		else if(n>99&&n<1000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while
	}//end else if
		else if(n>1000&&n<10000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while
	}//end else if
	else if(n>=10000&&n<100000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while

	}//end else if
	else if(n>=100000&&n<1000000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while

	}//end else if
	else if(n>=1000000&&n<10000000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while

	}//end else if
	else if(n>=10000000&&n<100000000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i*i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k*k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while

	}//end else if
	else if(n>=100000000&&n<1000000000){	
			k = n;
			while(n&&temp==1000){
				
				s = k %10;
				k=k/10;
				i=i+s;
				i=i*i*i*i*i*i*i*i*i;
				add = add+ i;
				i=0;	
			
				if(k<10){
					k=k*k*k*k*k*k*k*k*k;
					add = add+k;
					temp = 0;
					break;
				}//end if	
		}//end while

	}//end else if
	if (add==n){
				printf("\n%d is an Armstrong number.\n",n);
			}//end if
			else if(add!=n){
				printf("\n%d is not Armstrong number.\n",n);
			}//end if
	else{
		printf("\nInvalid input or out of the limit.\n");	
	}//end else if


			
		return 0;

}//end main function