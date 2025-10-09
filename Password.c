/*
NAME:Victor Baraka 
REG NO:PA106/G/28775/25
DESCRIPTION:Pogram to run a password
*/
#include <stdio.h>
int main(){
	int password;
	
	do {
		printf("Enter Password: ");
		scanf("&d", &password);
	} while (password == 1234? 0 :1);
	printf("Access Granted\n");
	return 0;
}