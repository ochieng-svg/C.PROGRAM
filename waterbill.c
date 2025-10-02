/*
Name:Victor Baraka
RegNo:PA106/G/28775/25
Description:Progrram to display water bill
*/
#include <stdio.h>

int main(){
	int units;
	float bill;

	printf("Enter water units consumed:");
	scanf("%d", &units);
	
	if(units<=30){
		bill=units*20;
	}else if(units <=60){
		bill=units*25;
	}else{
		bill=units*30;
	}
	printf("Total water bill: %.2f KES\n", bill);
	
	return 0;
}