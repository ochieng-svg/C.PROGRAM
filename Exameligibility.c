/*Name:Victor Baraka
Registration No:PA106/G/28775/25
Description:
*/
#include <stdio.h>

int main(){
	float attendance, avgMarks;
	
	printf("Enter attendance percantage:");
	scanf("%f", &attendance);
	
	printf("Enter average marks:");
	scanf("%f", &avgMarks);
	
	if(attendance>=75 &&avgMarks>=40){
		printf("Eligible for exams. \n");
	} else{
		printf("Not eligible.\n");
	}
	return 0;
}