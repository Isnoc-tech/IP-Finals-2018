#include <stdio.h>
#include <assert.h>

float calDiscount(int time, float totAmount);
void testcalDiscount();
void displayGift(float finalTot);

int main(void){
	testcalDiscount();
	
	int time;
	float totAmount = 0, finalTot = 0;
	
	printf("%s", "Enter the time: ");
	scanf("%d", &time);	
	
	if (time >= 0 && time <= 24){
		
		printf("Enter the total amount: ");
		scanf("%f", &totAmount);
		
		finalTot = totAmount - calDiscount(time, totAmount);
		
		printf("Total Amount: %.2f\n", finalTot);
		
		displayGift(finalTot);
	}
	
	else{
		printf("Invaild Time!\n");
	}
	
	
	return 0;
}

float calDiscount(int time, float totAmount){
	
	float discount;
	if (time >= 16 && time <= 19){
		
		
		if(totAmount >= 5000){
			
			discount = totAmount * 10/100.0;
		}
		else if (totAmount >= 2500){
			
			discount = totAmount * 7/100.0;
		}
		else{
			discount = 0;
		}
		
		return discount;
	}
	
	else if (time >= 20 && time <= 22){
		
		if(totAmount >= 5000){
			
			discount = totAmount * 12/100.0;
		}
		else if (totAmount >= 2500){
			
			discount = totAmount * 9/100.0;
		}
		
		return discount; 		
	}
}

void testcalDiscount(){
	
	assert(calDiscount(16, 10000) == 1000);
	assert(calDiscount(21, 3000) == 270);
	
}

void displayGift(float finalTot){
	if(finalTot >= 7000){
		printf("You received a Packet of Milk as a gift!\n");
	}
	
	else if(finalTot >= 5000){
		printf("You received a 1kg of Sugar as a gift!\n");
	}
	
	else if(finalTot >= 3000){
		printf("You received a Pack of 6 Eggs as a gift!\n");
	}
}
