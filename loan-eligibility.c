//program  on loan
//single line comment 
/*
Name:Vict Baraka 
Reg no:PA106/G/28775/25
Description:program  for loan to check age of loanee viability 
*/
#include <stdio.h>

int main()  {
int age;
float annualincome; 

//prompt user to enter age 
printf("enter your age");
scanf("%d",&age);

//prompt user to enter their income in shillings 
printf("enter your annual income in shillings");
scanf("%f",&annualincome);

//checking if the user meets the  agreement for getting a loan 
if (age>=21&&annualincome >=21000.0)
{printf("congratulations you qualify for a loan.\n");}
else{printf("unfortunately you currently do not qualify for our loan services.\n");}

return 0;
}
