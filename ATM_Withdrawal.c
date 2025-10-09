/*NAME:Victor Baraka
REG NO:PA106/G/28775/25
Description:program for ATM withdrawal
*/
#include <stdio.h>
int main(){
	int amount;
	int balance=10000;
	printf("Your current balance is %d\n",balance);
	while(balance>0)
	{
		printf("Enter the amount to withdraw\n");
		scanf("%d",&amount);
		balance-=amount;
		printf("New balance:%d\n",balance);
	}
	printf("Insufficient balance");
	return 0;
}
