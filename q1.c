#include <stdio.h>

int main(void){
	
	char courseType;
	int count = 1, hCount = 0, mCount = 0, fCount = 0;
	float totalH = 0, totalM = 0, totalF = 0;
	
	
	while(count <= 5){
		
		printf("Enter your course type: ");
		scanf("%s", &courseType);
		
		if(courseType == 1){
			break;
		}
		
		if (courseType == 'H' || courseType == 'M' || courseType == 'F' || courseType == 'h' || courseType == 'm' || courseType == 'f'){
			
			if(courseType == 'H' || courseType == 'h'){
				hCount++;
			}
			
			else if (courseType == 'M' || courseType == 'm'){
				mCount++;
			}
			
			else if(courseType == 'F' || courseType == 'f'){
				fCount++;
			}
		}
		
		else{
			printf("Invaild course type!\n");
			count--;
		}
		
		count++;		
	}

	totalH = hCount * 1500.00;
	totalM = mCount * 2000.00;
	totalF = fCount * 2500.00;
	
	printf("Number of student registered to H coursetype: %d\n", hCount);
	printf("Number of student registered to M coursetype: %d\n", mCount);
	printf("Number of student registered to F coursetype: %d\n", fCount);
	
	printf("Total earning of Coursetype H: %.2f\n", totalH);
	printf("Total earning of Coursetype M: %.2f\n", totalM);
	printf("Total earning of Coursetype F: %.2f\n", totalF);
	

	return 0;
}
