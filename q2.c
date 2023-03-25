#include <stdio.h>
#include <string.h>

struct customer{
	int accNo;
	char name[30];
	char transactionType[1];
	float amount;
	
};

int main(void){
	
	struct customer customer[5];
	char maxDepositName[20];
	char maxWithdrawName[20];
	int i;
	float maxDeposit = 0, maxWithdraw = 0, totalDeposit = 0, totalWithdraw = 0;

	
	
	for(i = 0 ; i < 5; i++){
		
		printf("Enter Accout No: ");
		scanf("%d", &customer[i].accNo);
		
		printf("Enter Account Name: ");
		scanf("%s", &customer[i].name);
		
		printf("Enter transactionType: ");
		scanf("%*c%c", &customer[i].transactionType);
		
		printf("Enter The amount: ");
		scanf("%f", &customer[i].amount);
	}
	
	for(i = 0; i < 5; i++){
		
		if(customer[i].transactionType[0] == 'd' || customer[i].transactionType[0] == 'D'){
			
			totalDeposit += customer[i].amount;
			if(maxDeposit < customer[i].amount){
				
				maxDeposit = customer[i].amount;
				strcpy(maxDepositName, customer[i].name);
				
			}
		}
		else if(customer[i].transactionType[0] == 'w' || customer[i].transactionType[0] == 'W'){
			
			totalWithdraw += customer[i].amount;
			if(maxWithdraw < customer[i].amount){
				
				maxWithdraw = customer[i].amount;
				strcpy(maxWithdrawName, customer[i].name);
			}
		}
	}
	
	printf("Total deposit amount: %.2f\n", totalDeposit);
	printf("Total withdraw amount: %.2f\n", totalWithdraw);
	printf("Name of the customer with maximum deposit amount: %s\n", maxDepositName);
	printf("Name of the customer with maximum withdraw amount: %s\n", maxWithdrawName);
	
	return 0;
}
