#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i=5678;
	int att=0;
	int a;
	printf("Enter the pin: ");
	scanf("%d",&a);
	while(i>0&&att<4){
		att++;
		if(a==i){
			printf("Unlocked");
			break;
			}//end if
		else if (a!=i){
			printf("\nNo way! Attempts: %d",att);
			printf("\nEnter the pin: ");
			scanf("%d",&a);
			if(att==3){
				printf("Card Blocked");
				break;
				}
			}//end else
	}//end while
	
	return 0;


}//end mINNNNNNNNNNNNNNNNNNN